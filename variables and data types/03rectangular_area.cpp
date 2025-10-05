#include <iostream>
#include <iomanip> // For std::setprecision

int main()
{
    double length, width,area;

    std::cout <<"Enter the length of rectangle:";
    std::cin >> length;
    std::cout <<"enter the width of rectangle:";
    std::cin >> width;

    area = length * width;

    std::cout << "Area of rectangle is: " << area << " square units" << std::endl;
    return 0;
}
