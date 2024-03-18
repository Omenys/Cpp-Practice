/*
Name: Raven Daigle
Course: ITSE 1307
Date: March 01, 2024
Description: Crime scene investigation tool to analyze samples
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

// Determine if hair is human
int getHairType(double medullaDiameter, double hairDiameter)
{
    double ratio = medullaDiameter / hairDiameter;
    return ratio >= 0.5 ? 0 : 1;
}

// Determine height of specimen
double getHeight(double femurHeight, int gender)
{
    if (gender == 0)
    {
        // Male
        return 69.089 + (2.238 * femurHeight);
    }
    else
    {
        // Female
        return 61.412 + (2.317 * femurHeight);
    }
}

double getInput(std::string message, bool isGender)
{
    while (true)
    {
        double measurement = 0.0;
        std::cout << message;
        std::cin >> measurement;

        // Check if measurement is valid
        if (measurement < 0.0)
        {
            std::cout << "Measurement must be greater than 0. " << std::endl;
            continue;
        }
        else if (isGender)
        {
            // Round to nearest integer to check for floating point errors
            int genderValue = round((int)measurement);

            // Check if valid input for gender
            if (measurement != 0 && measurement != 1)
            {
                std::cout << "Input 0 for male or 1 for female ";
                std::cout << std::endl;
                continue;
            }
            return (double)genderValue;
        }

        return measurement;
    }
}

main()
{
    // Set precision
    std::cout << std::fixed << std::setprecision(3);

    // Greet the user
    std::cout << "Welcome Inspector," << std::endl;

    // Hair Analysis
    std::cout << "Hair Analysis:" << std::endl;
    double medullaDiameter = getInput("Enter the medulla width in mm: ", false);
    double hairDiameter = getInput("Enter the entire hair width in mm: ", false);
    std::cout << std::endl;

    // Height Analysis
    std::cout << "Height Analysis: " << std::endl;
    int gender = (int)getInput("Please enter the gender (0 for male, 1 for female): ", true);
    double femurHeight = getInput("Please enter the femur length in cm: ", false);

    // Results
    int hairType = getHairType(medullaDiameter, hairDiameter);
    std::string hairGender = hairType == 0 ? "an animal" : "a Human";
    double height = getHeight(femurHeight, gender);

    std::cout << "The sample provided is from " << hairGender << std::endl;
    std::cout << "The height is estimated to be " << height << std::endl;

    return 0;
}