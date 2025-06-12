/**
 * @file conversion.cpp
 * @author Ian Codding II
 * @brief Conversion definition file
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
// INCLUDE USER CREATED HEADER FILE
#include "conversion.h"

/**
 * @brief this does what the promt below requires.
 * 
 * WRITE THE displayMenu FUNCTION HERE.
 * THIS void FUNCTION DISPLAYS THE MENU CHOICES
 * 1. Convert kilograms to pounds
 * 2. Convert pounds to kilograms
 * 3. Quit
 */
void menue()
{
    cout << "1. Convert kilograms to pounds\n"
         << "2. Convert pounds to kilograms\n"
         << "3. Quit \n"
         << "Pick[1 - 3] from the menu : ";
}

/**
 * @brief this does what the promt below requires.
 * 
 * WRITE THE kilosToPounds FUNCTION HERE.
 * IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
 * AND RETURN THE EQUIVALENT NUMBER OF POUNDS.
 * 
 * @param kilo 
 * @return double 
 */
double kiloToP(double kilo)
{
    double ret = kilo * 2.2;
    return ret;
}

/**
 * @brief this does what the promt below requires.
 * 
 * WRITE THE poundsToKilos FUNCTION HERE.
 * IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
 * AND RETURN THE EQUIVALENT NUMBER OF KILOS.
 *  
 * @param pou 
 * @return double 
 */
double PoToKilo(double pou)
{
    double ret = pou / 2.2;
    return ret;
}

/**
 * @brief checks my user input.
 * 
 * @return double 
 */
double makVal()
{
    double num;

    while (!(cin >> num))
    {
        cout << "Error, try again: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    return num;
}