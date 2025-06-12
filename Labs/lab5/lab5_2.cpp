/**
 * @file lab5_2.cpp
 * @author Ian Codding II
 * @brief This program finds the average number of boxes of cookies 
 *         sold by the children in a particular scout troop. 
 *         It illustrates the use of a counter, an accumulator, 
 *         and an end sentinel.
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

void displayTitle();
void displayResult(int nSellers, int nBoxes);

int main()
{ 
    displayTitle();

    // WRITE CODE TO INITIALIZE THE totalBoxes ACCUMLATOR TO 0,
    // THE numSeller COUNTER TO 0 AND THE numBoxes to 0.

    int totalBoxes = 0;  // Accumulates total boxes sold by the entire troop
    int numSeller = 0;  // Counts the number of children selling cookies
    int numBoxes = 0;    // Number of boxes of cookies sold by one child
    
    // WRITE CODE TO START A while LOOP THAT LOOPS WHILE numBoxes
    // IS NOT EQUAL TO -1, THE SENTINEL VALUE.
    while (numBoxes != -1)
    {
        cout << "Enter number of boxes of cookies sold by seller " << numSeller
             << " (or -1 to quit): ";
        cin >> numBoxes;
        
        if (numBoxes != -1)
        {
        // WRITE CODE TO ADD numBoxes TO THE totalBoxes ACCUMULATOR.
        totalBoxes += numBoxes;
        // WRITE CODE TO ADD 1 TO THE numSeller COUNTER.
        numSeller++;
        }
    }
    // WHEN THE LOOP IS EXITED, THE VALUE STORED IN THE numSeller COUNTER
    // WILL BE ONE MORE THAN THE ACTUAL NUMBER OF SELLERS. SO WRITE CODE
    // TO ADJUST IT TO THE ACTUAL NUMBER OF SELLERS.

    // WRITE CODE TO CALL displayResult() FUNCTION AND 
    // PASS numSeller AND totalBoxes INTO THE FUNCTION
    displayResult(numSeller, totalBoxes);
    return 0;
}

/**
 * @brief Displays title of the program
 */
void displayTitle()
{
    cout << "             **** Cookie Sales Information **** \n\n";
}

/**
 * @brief Displays the number of sellers and average number
 *        of boxes sold per seller, otherwise if there are no sellers,
 *        displays "No boxes were sold"
 *
 * @param nSellers  number of sellers
 * @param nBoxes    total boxes sold
 */
void displayResult(int nSellers, int nBoxes)
{
    if (nSellers == 0)
    {
        cout << "\nNo boxes were sold.\n";
    }
    else
    {
        double averageBoxes = 0.0;  // Average number of boxes sold per child

        // WRITE CODE TO ASSIGN averageBoxes THE COMPUTED AVERAGE NUMBER 
        // OF BOXES SOLD PER SELLER.
        averageBoxes = static_cast<double>(nBoxes) / nSellers;

        // WRITE CODE TO PRINT OUT THE NUMBER OF SELLERS AND AVERAGE NUMBER
        // OF BOXES SOLD PER SELLER.
        // Output MUST look like this: 
        // The average number of boxes sold by the 5 sellers was 39.8.
        cout << "The average number of boxes sold by the " << nSellers << " sellers was " << averageBoxes << ".\n";
    }
}