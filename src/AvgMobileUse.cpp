#include <iostream>
#include <iomanip>
#include <string>
/* Calculate average number of hours one person spends on their mobile device in a 3 month period*/

int main()
{
    int months = 3;
    std::string month1;
    double hours1;
    std::string month2;
    double hours2;
    std::string month3;
    double hours3;
    std::cout << std::fixed << std::setprecision(1);

    // Get the three months to evaluate
    for (int i = 1; i <= months; i++)
    {
        if (i == 1)
        {
            std::cout << "Enter the first month: ";
            std::cin >> month1;
        }
        else if (i == 2)
        {
            std::cout << "Enter the second month: ";
            std::cin >> month2;
        }
        else if (i == 3)
        {
            std::cout << "Enter the third month: ";
            std::cin >> month3;
        }
    }

    // Get average hours for each month
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            std::cout << "Enter the number of hours spent on your mobile in " << month1 << ": ";
            std::cin >> hours1;
        }
        if (i == 2)
        {
            std::cout << "Enter the number of hours spent on your mobile in " << month2 << ": ";
            std::cin >> hours2;
        }
        if (i == 3)
        {
            std::cout << "Enter the number of hours spent on your mobile in " << month3 << ": ";
            std::cin >> hours3;
        }
    }

    // Calculate average time spent on mobile
    double avgTime = (hours1 + hours2 + hours3) / 3.0;

    // Display
    std::cout << "The average time spent on your mobile device for " << month1 << ", " << month2 << ", "
              << "and " << month3 << "is " << avgTime << " hours." << std::endl;

    return 0;
}