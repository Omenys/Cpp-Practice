/*
Name: Raven Daigle
Course: ITSE 1307
Date: January 26, 2024
Description: Display total sale price of items given by the user
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Sales tax constant
const double SALES_TAX = 0.07;

// Function to calculate total
double totalCalculator(double subtotal)
{
    return subtotal + (subtotal * SALES_TAX);
}

// Function to get user input
double getInput(string message)
{
    double price = 0.0;
    cout << message;
    cin >> price;
    return price;
}

int main()
{
    // Set decimal precision
    cout << fixed << setprecision(2);

    // Get user input and assign to variables
    double price1 = getInput("Please enter the price of the first item: $");
    double price2 = getInput("Please enter the price of the second item: $");
    double price3 = getInput("Please enter the price of the third item: $");
    double price4 = getInput("Please enter the price of the fourth item: $");
    double price5 = getInput("Please enter the price of the fifth item: $");

    // Display each price
    cout << "Item 1 = $" << price1 << endl;
    cout << "Item 2 = $" << price2 << endl;
    cout << "Item 3 = $" << price3 << endl;
    cout << "Item 4 = $" << price4 << endl;
    cout << "Item 5 = $" << price5 << endl;

    // Display subtotal
    double subtotal = price1 + price2 + price3 + price4 + price5;
    cout << "Subtotal: $" << subtotal << endl;

    // Display tax
    cout << "Tax: $" << SALES_TAX * subtotal << endl;

    // Display total
    cout << "Total: $" << totalCalculator(subtotal) << endl;
}