#include <iostream>

int main() {
    char op;
    double num1, num2, result; // Using double for better precision
    bool error = false; // A flag to track if something went wrong

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
                error = true; // Set the error flag to true
            }
            break;
        default:
            std::cout << "Error! Invalid operator." << std::endl;
            error = true; // Set the error flag to true
            break;
    }

    // Only print the result if no error occurred
    if (!error) {
        std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;
    }
    // 
    
    return 0; // A return value of 0 indicates success
}