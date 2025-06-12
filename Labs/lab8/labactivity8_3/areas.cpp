/**
 * @file areas.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "areas.h"
using namespace std;

/**
 * @brief This function displays choices to the user
 */
void displayMenu()
{
    cout << "Program to calculate areas of objects\n"
         << "        1 -- square\n"
         << "        2 -- circle\n"
         << "        3 -- right triangle\n"
         << "        4 -- quit\n\n";
}

/**
 * @brief This function prompts a user for a input
 *        between min to max and validates it to ensure
 *        a valid input has been made. Input is then
 *        returned as an integer.
 *
 * @param  min  minimum user input
 * @param  max  maximum user input
 * @return int  choice as an integer between the
 *              values of min and max
 */
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    while (1)
    {
        cout << "Pick [" << min << "-" << max << "] from the menu: ";
        cin >> input;
        
        if (input < min || input > max)
        {
            cout << "Invalid input. ";
        }
        else
        {
            return input;
        }
    }
}

/**
 * @brief This function prompts the user for dimensions
 *        and calculates the area of a square
 *
 * @param  length  length of the square
 * @return double  area of the square
 */
double findSquareArea(double length)
{
    return length * length;
}

/**
 * @brief This function prompts the user for dimensions
 *        and calculates the area of a circle
 *
 * @param  radius  radius of the circle
 * @return double  area of the circle
 */
double findCircleArea(double radius)
{
    return PI * radius * radius;
}

/**
 * @brief This function prompts the user for dimensions
 *        and calculates the area of a triangle
 *
 * @param  base    base of the triangle
 * @param  height  height of the triangle
 * @return double  area of the triangle
 */
double findTriangleArea(double base, double height)
{
    return 0.5 * base * height;
}