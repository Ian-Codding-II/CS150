/**
 * @file lab7_1.cpp
 * @author Ian Codding II
 * @brief These are some examples functions that I have tested
 * This was done via the driver technique.
 * @version 0.1
 * @date 2025-03-08
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;
int computeSumOfOdd1(int lastNumber);
int computeSumOfOdd2(int lastNumber);
int sumOfNegatives();
double findMin(double number1, double number2, double number3);
/**
 * @brief this is where I test my functions
 *
 * @return int
 */
int main()
{
    cout << computeSumOfOdd1(6) << "\n";
    cout << computeSumOfOdd2(6) << "\n";
    cout << sumOfNegatives() << "\n";
    cout << findMin(2.99888, 3.0, 3.4754) << "\n";
}
/**
 * @brief a while loop that returns sum of the odd numbers
 *
 * @param lastNumber
 * @return int
 */
int computeSumOfOdd1(int lastNumber)
{
    int someNum = 1, sum = 0;
    while (someNum <= lastNumber)
    {
        if (someNum % 2 != 0)
        {
            sum += someNum;
        }
        someNum++;
    }
    return sum;
}
/**
 * @brief a for loop that returns the sum of the odd numbers
 *
 * @param lastNumber
 * @return int
 */
int computeSumOfOdd2(int lastNumber)
{
    int sum = 0;
    for (int someNum = 1; someNum <= lastNumber; someNum++)
    {
        if (someNum % 2 != 0)
        {
            sum += someNum;
        }
    }
    return sum;
}
/**
 * @brief this will ask for negative integers
 * After you give it a positve it
 * will return the sum of the negative
 *
 * @return int
 */
int sumOfNegatives()
{
    int num, sum = 0;
    do
    {
        cout << "Enter a negative number: ";
        cin >> num;

        if (num < 0)
        {
            sum += num;
        }

    } while (num < 0);
    return sum;
}
/**
 * @brief this will take three doubles and return the smallist
 *
 * @param number1
 * @param number2
 * @param number3
 * @return double
 */
double findMin(double number1, double number2, double number3)
{
    double value;                                                                // what I return
    number1 < number2 ?                                                          // the if statment
        (number1 < number3 ? value = number1 : value = number3)                  // if the prev if statment true then go through this one too
                      : (number2 < number3 ? value = number2 : value = number3); // if first if false, go through this if
    return value;                                                                // value will return the smallest
}