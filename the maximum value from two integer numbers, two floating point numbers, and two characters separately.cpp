#include <iostream>

// Overloaded function to find maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded function to find maximum of two floating point numbers
float max(float a, float b) {
    return (a > b) ? a : b;
}

// Overloaded function to find maximum of two characters
char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = max(5, 3);
    float floatMax = max(3.5f, 2.7f);
    char charMax = max('a', 'z');

    std::cout << "Max of integers: " << intMax << std::endl;
    std::cout << "Max of floats: " << floatMax << std::endl;
    std::cout << "Max of characters: " << charMax << std::endl;

    return 0;
}

