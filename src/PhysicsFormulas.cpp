/*
Name: Raven Daigle
Course: ITSE 1307
Date: February 04, 2024
Description: Calculate physics formulas based on user input
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Calculate kinetic energy
double calcKineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * (velocity * velocity);
}

// Calculate potential energy
double calcPotentialEnergy(double mass, double acceleration, double height)
{
    return mass * acceleration * height;
}

// Get user input
double getInput(string message)
{
    double measurement = 0.0;
    cout << message;
    cin >> measurement;
    return measurement;
}

int main()
{
    // Constant variable for gravity
    double const GRAVITY = 9.8;

    // Set decimal precision
    cout << fixed << setprecision(0);

    // Kinetic Energy Calculator Display
    cout << "=========================" << endl;
    cout << "Kinetic Energy Calculator" << endl;
    cout << "=========================" << endl;
    // Get mass and velocity
    double mass = getInput("Enter the mass in kilograms: ");
    double velocity = getInput("Enter the velocity in meters per second: ");
    // Display kinetic energy
    double kineticEnergy = calcKineticEnergy(mass, velocity);
    cout << "Kinetic Energy = " << kineticEnergy << " Joules" << endl;

    // Potential Energy Calculator Display
    cout << "=========================" << endl;
    cout << "Potential Energy Calculator" << endl;
    cout << "=========================" << endl;
    // Get height
    double height = getInput("Enter the height in meters: ");
    // Display Potential Energy
    double potentialEnergy = calcPotentialEnergy(mass, GRAVITY, height);
    cout << "Potential Energy = " << potentialEnergy << " Joules" << endl;
    cout << "=========================" << endl;

    return 0;
}