/**
 * @file lab6_2.cpp
 * @author Ian Codding II
 * @brief This program illustrates how to use a value-returning
 *         function to get, validate, and return input data.
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice(int min, int max);

int main()
{
    int choice;
    int min = 1;
    int max = 20;

    // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
    // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
    choice = getChoice(min, max);

    cout << "You entered " << choice << endl;
}

/**
 * @brief Get the Choice object
 * 
 * @param min      both of these decide your the rang in which you end.
 * @param max 
 * @return int 
 */
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