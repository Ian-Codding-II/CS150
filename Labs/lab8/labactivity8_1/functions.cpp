/**
 * @file functions.cpp
 * @author Ian Codding II
 * @brief Implementation/Definition file
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "functions.h"

// PUT FUNCTION DEFINTIONS HERE
/**
 * @brief This function initally did not swap nums because they were not referenced. 
 * However, after the swap with referince they did what we desired.
 * 
 * @param number1 number to become number2
 * @param number2 number to become number1
 */
void swapNums(int &number1, int &number2)
{
    // Parameter a receives num1 and parameter b receives num2
    // Swap the values that came into parameters a and b
    int temp = number1;
    number1 = number2;
    number2 = temp;

    // Print the swapped values
    cout << "In swapNums, after swapping, the two numbers are "
         << number1 << " and " << number2 << endl;
}