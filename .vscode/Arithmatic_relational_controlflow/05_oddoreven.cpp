#include <iostream>

int main(){
    int number;
    std::cout << "Enter the numnber :";
    std:: cin >> number;
    if (number % 2 ==0){
        std::cout << number << " is even number "<< std::endl;

    }
    else{
        std::cout<< number<< " is odd number"<< std::endl;

    }
    return 0;
}