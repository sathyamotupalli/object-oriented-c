#include <iostream>

// Function to find the factorial of an integer number
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to find the factorial of a floating-point number
double factorial(double n) {
    if (n <= 1.0)
        return 1.0;
    else
        return n * factorial(n - 1.0);
}

int main() {
    int intNum = 5;
    double doubleNum = 5.2;

    std::cout << "Factorial of " << intNum << " is " << factorial(intNum) << std::endl;
    std::cout << "Factorial of " << doubleNum << " is " << factorial(doubleNum) << std::endl;

    return 0;
}

