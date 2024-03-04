#include <iostream>

// Overloaded function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two floating point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    float floatResult = add(3.5f, 2.7f);

    std::cout << "Integer result: " << intResult << std::endl;
    std::cout << "Float result: " << floatResult << std::endl;

    return 0;
}

