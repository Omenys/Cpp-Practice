#include <iostream>
#include <iomanip>

int main()
{
    double number1;
    double number2;

    // Get first number
    std::cout << "Please enter the first number: ";
    std::cin >> number1;

    // Get second number
    std::cout << "Please enter the second number: ";
    std::cin >> number2;

    // If first number is larger
    if (number1 > number2)
    {
        std::cout << "The first number " << number1 << " is the larger number and number " << number2 << " is the smaller." << std::endl;
    }
    // If second number is larger
    else if (number2 > number1)
    {
        std::cout << "The second number " << number2 << " is the larger number and number " << number1 << " is the smaller." << std::endl;
    }
    // If the numbers are the same
    else
    {
        std::cout << "The numbers are the same." << std::endl;
    }

    return 0;
}