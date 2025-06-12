/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief Using value and reference parameters. This program
 *         uses a function to swap the values in two variables.
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include "functions.h"
using namespace std;

// Function prototype


int main()
{
    int num1 = 5,
        num2 = 7;

    // Print the two variable values
    cout << "In main the two numbers are "
         << num1 << " and " << num2 << endl;

    // Call a function to swap the values stored
    // in the two variables
    swapNums(num1, num2);

    // Print the same two variable values again
    cout << "Back in main again the two numbers are "
         << num1 << " and " << num2 << endl;

    return 0;
}

