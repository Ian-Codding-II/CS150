/**
 * @file main.cpp
 * @author This program calculate the area of shapes
 * @brief 
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "areas.h"

int main()
{
    int choice = 0;
    while (choice != 4)
    {
        displayMenu();
        choice = getChoice(1, 4);

        if (choice == 1)
        {
            double len = 0.0;
            cout << "Enter length: ";
            cin >> len;
            cout << "Area = " << findSquareArea(len) << endl;
        }
        else if (choice == 2)
        {
            double rad = 0.0;
            cout << "Enter radius: ";
            cin >> rad;
            cout << "Area = " << findCircleArea(rad) << endl;
        }
        else if (choice == 3)
        {
            double base = 0.0, height = 0.0;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area = " << findTriangleArea(base, height) << endl;
        }
    }
    return 0;
}
