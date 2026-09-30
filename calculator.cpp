#include <iostream>

int main() {
    // Declare two numbers
    double a = 12.5;
    double b = 2.5;

    std::cout << "Simple C++ Calculator" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Number 1: " << a << std::endl;
    std::cout << "Number 2: " << b << std::endl;

    // Perform basic calculations directly in main
    std::cout << "Addition: " << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << "Multiplication: " << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << "Division: " << a << " / " << b << " = " << (a / b) << std::endl;

    return 0;
}
