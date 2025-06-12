/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief This menu-driven program lets the user convert pounds
 *         to kilograms and kilograms to pounds.
 * @version 0.1
 * @date 2025-03-13
 *
 * @copyright Copyright (c) 2025
 *
 */
// INCLUDE USER CREATED HEADER FILE
#include "conversion.h"

int main()
{
    // DECLARE ANY VARIABLES MAIN USES HERE.
    int choice = 56;
    // WRITE THE CODE HERE TO CARRY OUT THE STEPS
    while (1)
    {
        menue();
        while (choice > 3 || choice < 1)
        {
            choice = makVal();
            if (choice > 3 || choice < 1)
            {
                cout << "Error, try again: ";
            }
        }

        switch (choice)
        {
        case 1:
            double kilo;
            cout << "\nWeight to be converted: ";
            kilo = makVal();
            cout << kilo << " kilograms = " << kiloToP(kilo) << " pounds.\n\n";
            break;
        case 2:
            double pou;
            cout << "\nWeight to be converted: ";
            pou = makVal();
            cout << pou << " pounds = " << PoToKilo(pou) << " kilograms.\n\n";
            break;
        default:
            exit(1);
            break;
        }
        choice = 56;
    }
    // REQUIRED BY THE PROGRAM SPECIFICATIONS.

    return 0; 
}