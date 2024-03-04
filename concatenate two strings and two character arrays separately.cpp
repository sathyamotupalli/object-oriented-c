#include <iostream>
#include <cstring>

// Overloaded function to concatenate two strings
std::string concat(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

// Overloaded function to concatenate two character arrays
char* concat(const char* arr1, const char* arr2) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    char* result = new char[len1 + len2 + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}

int main() {
    std::string strConcat = concat("Hello, ", "world!");
    char* arrConcat = concat("Hello, ", "world!");

    std::cout << "Concatenated string: " << strConcat << std::endl;
    std::cout << "Concatenated character array: " << arrConcat << std::endl;

    delete[] arrConcat;

    return 0;
}

