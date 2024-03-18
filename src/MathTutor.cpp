/*
Name: Raven Daigle
Course: ITSE 1307
Date: February 09, 2024
Description: Program to tutor student in math
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
    // Create random numbers
    srand(time(0));
    int rand1 = rand();
    int rand2 = rand();

    // Variables
    int answer = 0;
    char op = '+';

    // Loop until user quits
    while (true)
    {
        // Provide a menu for the user to decide the operation
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Please choose your operation or press 5 to Quit: ";

        // Get user input
        int menuChoice = 5;
        std::cin >> menuChoice;

        // Outcomes of user choice
        switch (menuChoice)
        {
        case 1:
            op = '+';
            answer = rand1 + rand2;
            break;
        case 2:
            op = '-';
            answer = rand1 - rand2;
            break;
        case 3:
            op = '*';
            answer = rand1 * rand2;
            break;
        case 4:
            op = '/';
            answer = rand1 / rand2;
            break;
        case 5:
            std::cout << "Thank you!" << std::endl;
            return 1;
        default:
            std::cout << "Invalid option." << std::endl;
        }

        // Display numbers to user
        std::cout << rand1 << " " << op << " " << rand2 << " = ";

        // Get user answer
        int userResult = 0;
        std::cin >> userResult;

        // Display if user is correct
        if (userResult == answer)
        {
            std::cout << "That is correct!" << std::endl;
        }
        else
        {
            std::cout << "Sorry the answer is " << answer << ", please try again!" << std::endl;
        }
    }
    return 0;
}