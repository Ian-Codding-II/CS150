/**
 * @file lab3_1
 *
 * This program finds the average of two numbers.
 * It contains two errors that must be fixed.
 *
 * @author Ian Codding II
 * @date   2/6/2025
 */
#include <iostream>
using namespace std;

int main ()
{
    int size = 2;    // The number of values to be averaged
    double num1 = 0.0,     // User input number 1
           num2 = 0.0,     // User input number 2
           average = 0.0;  // Average of num1 and num2

    // Get the two numbers
    cout << "Enter two numbers separated by one or more spaces: ";
    cin  >> num1 >> num2;
    cout << num1 << " " << num2 << endl;

    // Calculate the average
    average = (num1 + num2) / size;

    // Display the average
    cout << "The average of the two numbers is: " << average << endl;

    return 0;
}