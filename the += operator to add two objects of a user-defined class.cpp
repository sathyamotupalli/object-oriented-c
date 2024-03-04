#include <iostream>

class MyClass {
private:
    int value;
public:
    MyClass(int val) : value(val) {}

    void operator+=(const MyClass& other) {
        value += other.value;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(3);

    obj1 += obj2;

    std::cout << "Value after addition: " << obj1.getValue() << std::endl;

    return 0;
}

