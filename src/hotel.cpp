/*
Name: Raven Daigle
Course: ITSE 1307
Date: February 18, 2024
Description: Calculate the occupancy rate of a hotel
*/

#include <iostream>
#include <iomanip>
#include <string>

// Get floors
int getFloors(std::string message)
{
    int floors;

    std::cout << message << " ";
    std::cin >> floors;

    return floors;
}

// Calculate occupancy percentage
double percentOccupied(int totalOccupied, int totalRooms)
{
    return ((double)totalOccupied / (double)totalRooms) * 100;
}

int main()
{
    // Variables
    int rooms;
    int occupied;
    int totalRooms = 0;
    int totalOccupied = 0;

    // Get number of floors
    int floors = getFloors("How many floors does the hotel have?");

    if (floors < 1)
    {
        std::cout << "The number of floors cannot be less than 1." << std::endl;
        return 1;
    }

    // For each floor, get amount of rooms and how many are occupied
    for (int i = 1; i <= floors; i++)
    {
        // Loop until valid rooms
        while (true)
        {
            std::cout << "How many rooms does level " << i << " have?";
            std::cout << " ";
            std::cin >> rooms;
            if (rooms >= 10)
            {
                // Update total rooms
                totalRooms += rooms;
                break;
            }

            std::cout << "Number of rooms must be greater than 10.";
        }
        // Loop until valid levels
        while (true)
        {
            std::cout << "How many rooms are occupied on level " << i << "?";
            std::cout << " ";
            std::cin >> occupied;
            if (occupied <= rooms && occupied >= 0)
            {
                // Update total occupied
                totalOccupied += occupied;
                break;
            }
            std::cout << "Invalid occupancy!" << std::endl;
        }
    }

    // Display
    std::cout << "============================================" << std::endl;
    std::cout << "Total number of rooms occupied: " << totalOccupied << std::endl;
    std::cout << "Total number of rooms unoccupied: " << totalRooms - totalOccupied << std::endl;
    std::cout << "Total number of rooms in the hotel: " << totalRooms << std::endl;
    std::cout << "Percent of rooms occupied: " << percentOccupied(totalOccupied, totalRooms) << " %" << std::endl;

    return 0;
}