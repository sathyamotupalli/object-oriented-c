#include <iostream>

// Function to calculate the sum of two matrices
void addMatrix(int mat1[][3], int mat2[][3], int result[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to calculate the sum of two arrays
void addArray(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int resultArray[3];

    addMatrix(matrix1, matrix2, resultMatrix);
    addArray(array1, array2, resultArray, 3);

    // Displaying result
    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Sum of arrays:";
    for (int i = 0; i < 3; ++i) {
        std::cout << " " << resultArray[i];
    }
    std::cout << std::endl;

    return 0;
}

