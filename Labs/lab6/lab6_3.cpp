/**
 * @file lab6_3.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

void displayMenu();
double findSquareArea(double length);
double findCircleArea(double radius);
double findTriangleArea(double base, double height);

int getChoice(int min, int max);

const double PI = 3.14159;

int main()

{
    

    int choice = 0;
    while (choice != 4)
    {
        displayMenu();
        choice = getChoice(1, 4);

        
        if (choice == 1)
        {
             // Prompt user length of square
            double len = 0.0;
            cout << "Enter length: ";
            cin >> len;

            cout << "Area = " << findSquareArea(len) << endl;
        }
        else if (choice == 2)
        {
            // Prompt user for radius of circle
            double rad = 0.0;
            cout << "Enter radius: ";
            cin >> rad;
            cout << "Area = " << findCircleArea(rad) << '\n';
           
        }
        else if (choice == 3)
        {
            // Prompt user for base and height of the right triangle
            double base = 0.0, height = 0.0;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            cout << "Area = " << findTriangleArea(base,height) << '\n';
        }
        
    }

    return 0;
}

void displayMenu() // This will display the menu.
{
    // Display menu
    cout << "Program to calculate areas of objects\n"
    << "        1 -- square\n"
    << "        2 -- circle\n"
    << "        3 -- right triangle\n"
    << "        4 -- quit\n\n";

    // Prompt user to enter a choice from the menu
    cout << "Pick [1-4] from the menu: ";
}
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    while (1)
    {
        cout << "Enter an integer between " << min << " and " << max << ": ";
        cin >> input;

        if (input >= min && input <= max)
        {
            break;
        }
        cout << "Invalid input. ";
    }

    return input;
}

double findSquareArea(double len) // This will take in the input of len and calculate the area.
{
    double area = 0.0;

    // Compute for area of square
    area = len * len;

    return area;
}

double findCircleArea(double rad) // This will take in the input of rad and calculate the area.
{
    double area = 0.0;
     // Compute for area of circle
     area = PI * rad * rad;
     
     return area;
}

double findTriangleArea(double base, double height) // This will take in the input of base and height to calculate the area.
{
    double area = 0.0;
     // Compute area of right triangle
     area = 0.5 * base * height;
     
     return area;
}