#include <iostream>

class MyFunction {
public:
    // Overload () operator to call a function with arguments
    int operator()(int x, int y) {
        return x + y;
    }
};

int main() {
    MyFunction func;

    // Call the function using overloaded ()
    int result = func(3, 5);
    std::cout << "Result of calling function: " << result << std::endl;

    return 0;
}

