/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief converts numbers to roman numerals
 * @version 0.1
 * @date 2025-03-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "convert.h"
#include <iostream>
#include <limits>
int main()
{
    int sentinal = -1;

    do
    {
        cout << "Enter the number from 1 to 20 (or 0 to quit): ";
        cin >> sentinal;
        cout << "\n";

        while (cin.fail() || sentinal < 0 || sentinal > 20)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nError! that is out of bounds\n\n";
            cout << "Enter the number from 1 to 20 (or 0 to quit): ";
            cin >> sentinal;
        }

        if(sentinal != 0)
        {
        cout << sentinal << " equivalent to " 
            << convertToRomanNumeral(sentinal)<< " in the Roman numeral\n\n";
        }

    } while (sentinal != 0);

    return 0;
}