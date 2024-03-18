#include <iostream>
#include <iomanip>

// Average function
double getMean(int numArray[], int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += static_cast<double>(numArray[i]);
    }

    return total / static_cast<double>(size);
}

int main()
{
    int size = 5;
    int numArray[size];

    // Read input into array
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter number in array: " << std::endl;
        std::cin >> numArray[i];
    }

    // Demonstrate mean function
    double mean = getMean(numArray, size);
    std::cout << "The mean of the array: " << mean << std::endl;

    return 0;
}