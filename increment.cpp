#include <iostream>
using namespace std;
class Incrementer {
private:
    int value;

public:
    Incrementer() : value(0) {}

    void operator++() {
        ++value;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Incrementer obj;

    cout << "Initial value: " << obj.getValue() << std::endl;

    ++obj;

    cout << "Value after increment: " << obj.getValue() << std::endl;

    return 0;
}

