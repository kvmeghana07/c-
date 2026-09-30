#include <iostream>
#include <stdexcept>

// Basic arithmetic functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero!");
    }
    return a / b;
}

int main() {
    std::cout << "Simple C++ Calculator" << std::endl;
    std::cout << "=====================" << std::endl;

    double num1 = 12.5;
    double num2 = 2.5;

    std::cout << "Numbers: " << num1 << " and " << num2 << std::endl;
    std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
    std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
    std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;

    try {
        std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    // Example demonstrating division by zero handling
    double zero = 0.0;
    try {
        std::cout << num1 << " / " << zero << " = " << divide(num1, zero) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
