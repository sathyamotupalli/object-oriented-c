#include <iostream>
#include <cmath>

int power(int base, int exponent) {
    return std::pow(base, exponent);
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int intBase = 2, intExponent = 3;
    double doubleBase = 2.5, doubleExponent = 2.0;

    std::cout << "Power of " << intBase << " raised to " << intExponent << " is " << power(intBase, intExponent) << std::endl;
    std::cout << "Power of " << doubleBase << " raised to " << doubleExponent << " is " << power(doubleBase, doubleExponent) << std::endl;

    return 0;
}

