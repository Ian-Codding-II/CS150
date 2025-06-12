/**
 * @file lab5_3.cpp
 * @author Ian Codding II
 * @brief This program displays a series of terms and computes its sum.
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void displayName(string name);
void displaySeries(int numberOfTerms);

int main()
{
    string studentName = "Ian Codding II";
    displayName(studentName);
    
    cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n\n";

    int nTerms = 0;   // Number of terms
    char again = 'e';
    do
    {
    cout << "How many terms (2 - 10)? ";
    cin >> nTerms;
    while (nTerms < 2 || nTerms > 10)
    {
        cout << "That number is invalid. Pleas enter a new number." << endl;
        cout << "How many terms (2 - 10)? ";
        cin >> nTerms;
    }
    
    displaySeries(nTerms);

    cout << "Would you like to go again? ";
    cin >> again;
    } while (toupper(again) == 'Y');

    return 0;
}

/**
 * @brief Display name to the screen.
 *
 * @param name  name of student
 */
void displayName(string name)
{
    // WRITE THE CODE TO PRINT name TO SCREEN FOLLOWED BY
    // A NEW LINE
    cout << name << endl;
}

/**
 * @brief Displays a series of terms and computes its sum.
 *
 * @param numberOfTerms   number of terms in the series
 */
void displaySeries(int numberOfTerms)
{
    double sum = 0.0;      // Accumulator that adds up all terms in the series

    // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
    for(int term = 1; term <= numberOfTerms; term++)
    {
        double currentTerm = 0.0;
        int denominator = 0;

        currentTerm = 1 / pow(2.0, static_cast<double>(term));
        // WRITE THE CODE TO PRINT THIS TERM.
        denominator = 100 / (currentTerm * 100);
        cout << "1/" << denominator << " ";
        // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
        if (term != numberOfTerms)
        {
            cout << "+ ";
        }
        // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
        else
        {
            cout << "= ";
        }

        // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
        sum = sum + currentTerm;
    }
    cout << sum << endl;

    // WRITE A LINE OF CODE TO PRINT THE SUM.
}