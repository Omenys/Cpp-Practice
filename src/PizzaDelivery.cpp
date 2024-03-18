#include <iostream>
#include <iomanip>

/* Calculate total bill from meal cost and tip amount from user */

// Calculate tax
double calcTax(double mealPrice, double taxPercent)
{
    return mealPrice * (taxPercent / 100.0);
}
// Calculate tip
double calcTip(double totalCost, double tipPercent)
{
    return totalCost * (tipPercent / 100.0);
}

int main()
{
    double mealPrice;
    double tipPercent;
    const double TAX_PERCENT = 8.25;
    std::cout << std::fixed << std::setprecision(2);

    // Get meal purchase price
    std::cout << "Enter the meal purchase price: ";
    std::cin >> mealPrice;

    // Get tip percent
    std::cout << "What percent would you like to tip: 10 for 10%: ";
    std::cin >> tipPercent;

    // Calculate
    double taxAmount = calcTax(mealPrice, TAX_PERCENT);
    double totalCost = mealPrice + taxAmount;
    double tipAmount = calcTip(totalCost, tipPercent);
    double subtotalPrice = totalCost + tipAmount;

    // Display
    std::cout << "Meal Purchase: $" << mealPrice << std::endl;
    std::cout << "Tax Rate: " << TAX_PERCENT << "%" << std::endl;
    std::cout << "Tax Amount: $" << taxAmount << std::endl;
    std::cout << "Tip Rate: " << tipPercent << "%" << std::endl;
    std::cout << "Tip Amount: $" << tipAmount << std::endl;
    std::cout << "Total: $" << subtotalPrice << std::endl;

    return 0;
}