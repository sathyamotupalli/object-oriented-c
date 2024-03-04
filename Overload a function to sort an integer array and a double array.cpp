#include <iostream>
#include <algorithm>

// Function to sort an integer array
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to sort a double array
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to print an array
template<typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {5, 3, 1, 4, 2};
    double doubleArray[] = {5.5, 3.3, 1.1, 4.4, 2.2};
    int intSize = sizeof(intArray) / sizeof(int);
    int doubleSize = sizeof(doubleArray) / sizeof(double);

    std::cout << "Original integer array: ";
    printArray(intArray, intSize);
    sortArray(intArray, intSize);
    std::cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    std::cout << "Original double array: ";
    printArray(doubleArray, doubleSize);
    sortArray(doubleArray, doubleSize);
    std::cout << "Sorted double array: ";
    printArray(doubleArray, doubleSize);

    return 0;
}

