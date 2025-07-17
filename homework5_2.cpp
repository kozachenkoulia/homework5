#include <iostream>
int main() {
    double num1 = 0;
    double num2 = 0;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    char operation = 0;
    std::cout << "Enter the operation: ";
    std::cin >> operation;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if (operation == '+') {
        double result = num1 + num2;
        std::cout << "The answer is: " << result;
    }
    if (operation == '-') {
        double result = num1 - num2;
        std::cout << "The answer is: " << result;
    }
    if (operation == '*') {
        double result = num1 * num2;
        std::cout << "The answer is: " << result;
    }
    if (operation == '/') {
        double result = num1 / num2;
        std::cout << "The answer is: " << result;
    }
}