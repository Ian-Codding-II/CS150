/**
 * @file lab6_1.cpp
 * @author Ian Codding II
 * @brief This program calculates the area.
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

void displayMenu();
void findSquareArea(double length);
void findCircleArea(double radius);
void findTriangleArea(double base, double height);

const double PI = 3.14159;

int main()

{
    

    int choice = 0;
    while (choice != 4)
    {
        displayMenu();
        cin >> choice;

        
        if (choice == 1)
        {
             // Prompt user length of square
            double len = 0.0;
            cout << "Enter length: ";
            cin >> len;

            findSquareArea(len);
        }
        else if (choice == 2)
        {
            // Prompt user for radius of circle
            double rad = 0.0;
            cout << "Enter radius: ";
            cin >> rad;
            findCircleArea(rad);
           
        }
        else if (choice == 3)
        {
            // Prompt user for base and height of the right triangle
            double base = 0.0, height = 0.0;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            findTriangleArea(base,height);
        }
        else if (choice != 4)
        {
            cout << "Invalid Menu!\n";
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

void findSquareArea(double len) // This will take in the input of len and calculate the area.
{
    double area = 0.0;

    // Compute for area of square
    area = len * len;
    cout << "Area = " << area << '\n';
}

void findCircleArea(double rad) // This will take in the input of rad and calculate the area.
{
    double area = 0.0;
     // Compute for area of circle
     area = PI * rad * rad;
     cout << "Area = " << area << '\n';
}

void findTriangleArea(double base, double height) // This will take in the input of base and height to calculate the area.
{
    double area = 0.0;
     // Compute area of right triangle
     area = 0.5 * base * height;
     cout << "Area = " << area << '\n';
}