/**
 * @file 15.3.cpp
 * @author Ian Codding II
 * @brief This program demonstrates use of pointers as the function parameters.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

// Function prototype ---change it
void swapNums(int *number1, int *number2);

int main()
{
   int num1 = 5,
       num2 = 7;

   // Print the two variable values
   cout << "In main the two numbers are "
        << num1 << " and " << num2 << endl;

   // Call a function to swap the values stored
   // in the two variables
   //-------------change it----------------
   swapNums(&num1, &num2);

   // Print the same two variable values again
   cout << "Back in main again the two numbers are "
        << num1 << " and " << num2 << endl;

   return 0;
}

/**
* @brief This function swaps two numbers
* @param number1 pointer to the first number
* @param number2 pointer to the second number
*/
//change the function below to use a pointer variables as the parameter
void swapNums(int *number1, int *number2)
{
   // Swap the values that came into parameters
   int temp = *number1;
   *number1 = *number2;
   *number2 = temp;

   // Print the swapped values
   cout << "In swapNums, after swapping, the two numbers are "
        << *number1 << " and " << *number2 << endl;
   return;
}
