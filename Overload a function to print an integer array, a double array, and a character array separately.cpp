#include <iostream>

// Overloaded function to print an integer array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Overloaded function to print a double array
void printArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Overloaded function to print a character array
void printArray(const char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = "Hello";

    std::cout << "Integer array:";
    printArray(intArray, 5);

    std::cout << "Double array:";
    printArray(doubleArray, 5);

    std::cout << "Character array:";
    printArray(charArray, 5);

    return 0;
}

