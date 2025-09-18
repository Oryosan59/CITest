#include <iostream>
#include "src/calculator.hpp"

int main() {
    Calculator calc;
    int a = 10;
    int b = 5;

    std::cout << "Addition: " << a << " + " << b << " = " << calc.add(a, b) << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << a << " * " << b << " = " << calc.multiply(a, b) << std::endl;
    std::cout << "Division: " << a << " / " << b << " = " << calc.divide(a, b) << std::endl;

    return 0;
}
