#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

// Get minimum account balance in the array
double getMin(double balArray[], int size)
{
    double min = balArray[0];

    for (int i = 0; i < size; i++)
    {
        if (balArray[i] < min)
        {
            min = balArray[i];
        }
    }
    return min;
}

// Get the maximum account balance in the array
double getMax(double balArray[], int size)
{
    double max = balArray[0];

    for (int i = 0; i < size; i++)
    {
        if (balArray[i] > max)
        {
            max = balArray[i];
        }
    }
    return max;
}

// Get the sum of the account balances in the array
double getSum(double balArray[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += balArray[i];
    }
    return sum;
}

// Get the average of the balances in the array
double getAvg(double sum, int size)
{
    return sum / static_cast<double>(size);
}

int main()
{
    // Array size initially unknown
    int size;
    double balArray[size];
    int count = 0;
    std::string myFile;

    // Ask the user for a file name
    std::cout << "Enter the name of the file: ";
    std::cin >> myFile;

    // Read contents
    std::ifstream inputFile(myFile);

    // Error handling
    if (!inputFile)
    {
        std::cout << "File error!" << std::endl;
        return 1;
    }

    // Update each array position
    while (inputFile >> balArray[count++])
    {
    }

    // Process data and display
    int min = getMin(balArray, size);
    std::cout << "The minimum account balance: " << min << std::endl;

    int max = getMax(balArray, size);
    std::cout << "The maximum account balance:  " << max << std::endl;

    int sum = getSum(balArray, size);
    std::cout << "The sum of the account balances: " << sum << std::endl;

    double average = getAvg(sum, size);
    std::cout << "The mean of the balances: " << average << std::endl;

    return 0;
}