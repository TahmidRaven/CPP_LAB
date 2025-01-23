#include <iostream>

int main() {
    
    char op;
    double num1, num2, result;

    std::cout << "********** CALCULATOR **********" << std::endl;

    std::cout << "Enter either (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
    }


    std::cout << "********************************" << std::endl;

    return 0;
}