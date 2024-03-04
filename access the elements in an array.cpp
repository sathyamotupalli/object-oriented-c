#include <iostream>

class MyArray {
private:
    int arr[5];

public:
    MyArray() {
        // Initialize array with some values for demonstration
        for (int i = 0; i < 5; ++i) {
            arr[i] = i + 1;
        }
    }

    // Overload [] operator to access elements by index
    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            std::cerr << "Index out of range" << std::endl;
            exit(1);
        }
        return arr[index];
    }
};

int main() {
    MyArray array;

    // Access elements using overloaded []
    std::cout << "Element at index 2: " << array[2] << std::endl;

    // Modify element using overloaded []
    array[2] = 10;
    std::cout << "Modified element at index 2: " << array[2] << std::endl;

    return 0;
}

