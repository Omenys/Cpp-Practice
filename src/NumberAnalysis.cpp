/*
Name: Raven Daigle
Course: ITSE 1307
Date: February 24, 2024
Description: Read numbers from a file and display information about the data
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

// Get lowest number in array
int getLowest(int numArray[], int size)
{
    int lowest = numArray[0];

    for (int i = 0; i < size; i++)
    {
        if (numArray[i] < lowest)
        {
            lowest = numArray[i];
        }
    }
    return lowest;
}

// Get highest number in array
int getHighest(int numArray[], int size)
{

    int highest = numArray[0];

    for (int i = 0; i < size; i++)
    {
        if (numArray[i] > highest)
        {
            highest = numArray[i];
        }
    }
    return highest;
}

// Get total of numbers in array
int getTotal(int numArray[], int size)
{

    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += numArray[i];
    }
    return total;
}

// Get average of numbers in array
double getAverage(int total, int size)
{
    return static_cast<double>(total) / size;
}

int main()
{
    int size = 12;
    int numArray[size];
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
    while (inputFile >> numArray[count++])
    {
    }

    // Analyze data and display
    int lowest = getLowest(numArray, size);
    std::cout << "The lowest number in the array: " << lowest << std::endl;

    int highest = getHighest(numArray, size);
    std::cout << "The highest number in the array: " << highest << std::endl;

    int total = getTotal(numArray, size);
    std::cout << "The total of the numbers in the array: " << total << std::endl;

    double average = getAverage(total, size);
    std::cout << "The average of the numbers in the array: " << average << std::endl;

    return 0;
}
