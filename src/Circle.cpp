/*
Name: Raven Daigle
Course: ITSE 1307
Date: March 07, 2024
Description: Create a circle class and demonstrate the getters, setters, and constructors
*/

#include <iostream>
#include <iomanip>

// Create the circle class
class Circle
{
private:
    // Variables
    double radius;
    double area;
    double circum;
    double diameter;

public:
    // Setters
    void setRadius(double r)
    {
        radius = r;
    }
    void setArea(double a)
    {
        area = a;
    }
    void setCircumference(double c)
    {
        circum = c;
    }
    void setDiameter(double d)
    {
        diameter = d;
    }

    // Getters
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return area;
    }
    double getCircumference()
    {
        return circum;
    }
    double getDiameter()
    {
        return diameter;
    }

    // Default constructor
    Circle()
    {
        radius = 0.0;
        area = 0.0;
        circum = 0.0;
        diameter = 0.0;
    }

    // Parametized constructor
    Circle(double r, double a, double c, double d)
    {
        radius = r;
        area = a;
        circum = c;
        diameter = d;
    }
};

// Display circle dimensions from getters
void PrintAll(Circle circle)
{
    std::cout << "=============================================" << std::endl;
    // Demonstrate getting data from the getters
    std::cout << "The dimensions of your circle are: " << std::endl;
    // Get radius
    std::cout << "\tRadius: " << circle.getRadius() << std::endl;
    // Get area
    std::cout << "\tArea: " << circle.getArea() << std::endl;
    // Get circumference
    std::cout << "\tCircumference: " << circle.getCircumference() << std::endl;
    // Get diameter
    std::cout << "\tDiameter: " << circle.getDiameter() << std::endl;
}

int main()
{
    // Create circle object
    Circle circle = Circle();

    // Temporary variable to hold input
    double input;

    // Demonstrate setting the setters from input
    // Set radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> input;
    circle.setRadius(input);
    // Set area
    std::cout << "Enter the area of the circle: ";
    std::cin >> input;
    circle.setArea(input);
    // Set circumference
    std::cout << "Enter the circumference of the circle: ";
    std::cin >> input;
    circle.setCircumference(input);
    // Set diameter
    std::cout << "Enter the diameter of the circle: ";
    std::cin >> input;
    circle.setDiameter(input);

    // Demos no-arg constructor
    PrintAll(circle);

    // Demos parameterized constructor
    Circle newCircle = Circle(5.0, 20.5, 10.0, 15.5);
    PrintAll(newCircle);

    return 0;
}