/**
 * @file 15.2.cpp
 * @author Ian Codding II
 * @brief This program process an array using pointers.
 * @version 0.1
 * @date 2025-05-01
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    // Remember, array name can be use as a pointer
    cout << "Enter " << SIZE << " numbers" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        // change the line below to use pointer
        //  cin >> numbers[i];
        cin >> *(numbers + i);
    }
    cout << "You entered:\n";
    for (int i = 0; i < SIZE; i++)
    {
        // change the line below to use pointer
        // cout << numbers[i] << " ";
        cout << *(numbers +i) << " ";
    }
    cout << endl;

    // add 1 to each element of array using pointer
    for (int i = 0; i < SIZE; i++)
    {
        (*(numbers +i))++;
    }
    // display array using pointer
    cout << "New array:\n";
    for (int i = 0; i <SIZE; i++)
    {
        cout << *(numbers +i) << " ";
    }
    cout << endl;

    return 0;
}
