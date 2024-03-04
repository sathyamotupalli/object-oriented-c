#include <iostream>

class Adder {
private:
    int value;

public:
    Adder(int val) : value(val) {}

    Adder operator+(const Adder& other) {
        return Adder(this->value + other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Adder a1(5);
    Adder a2(10);

    Adder sum = a1 + a2;

    std::cout << "Sum: " << sum.getValue() << std::endl;

    return 0;
}

