#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(const std::vector<std::vector<int>>& matrixData) : data(matrixData) {}

    Matrix operator*(const Matrix& other) {
        std::vector<std::vector<int>> result(data.size(), std::vector<int>(other.data[0].size(), 0));

        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < other.data[0].size(); ++j) {
                for (size_t k = 0; k < data[0].size(); ++k) {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix(result);
    }

    void print() {
        for (const auto& row : data) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<std::vector<int>> data1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> data2 = {{5, 6}, {7, 8}};

    Matrix mat1(data1);
    Matrix mat2(data2);

    std::cout << "Matrix 1:" << std::endl;
    mat1.print();
    std::cout << "Matrix 2:" << std::endl;
    mat2.print();

    Matrix product = mat1 * mat2;

    std::cout << "Product:" << std::endl;
    product.print();

    return 0;
}

