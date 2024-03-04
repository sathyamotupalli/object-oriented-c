#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}

    bool operator==(const MyClass& other) const {
        return this->data == other.data;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(5);
    MyClass obj3(10);

    if (obj1 == obj2) {
        std::cout << "obj1 is equal to obj2" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj2" << std::endl;
    }

    if (obj1 == obj3) {
        std::cout << "obj1 is equal to obj3" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj3" << std::endl;
    }

    return 0;
}

