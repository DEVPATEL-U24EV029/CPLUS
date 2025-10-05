#include <iostream>
#include <string>
#include <limits> // Required for std::numeric_limits

int main() {
    std::string name;
    int age;
    float gpa;

    // --- Input collected in a logical order ---
    std::cout << "Enter your full name: ";
    // Use std::getline to read the entire line, including spaces
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your GPA: ";
    std::cin >> gpa;

    // --- Output remains the same ---
    std::cout << "\n---- User Info ---" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " years old" << std::endl;
    std::cout << "GPA: " << gpa << std::endl;

    return 0;
}