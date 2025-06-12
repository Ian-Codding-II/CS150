/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief displays to the user how many wins the team had
 * @version 0.1
 * @date 2025-05-06
 *
 * @copyright Copyright (c) 2025
 *
 */
// INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
#include "baseball.hpp"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string input;

    ifstream winnersFile;
    winnersFile.open("WorldSeriesWinners.txt");
    // 1. Check if file opened successfully, if not exit the program
    if (winnersFile.fail())
    {
        cout << "\nError opening file, shuting down. \n\n";
        exit(1);
    }
    // 2a. Declare an array of strings to store data for world series winners
    vector<Team> winners;
    // 2. Load data from winnersFile to an array by calling loadWinnersFromFileToArray
    loadFromFileToVector(winnersFile, winners);
    // 3. Close the file stream
    winnersFile.close();
    // Read the instructions on what else you need to finish this program
    displayVector(winners);

    insertionSort(winners);
    cout << "\n################Sorted vector################\n\n";
    displayVector(winners);

    return 0;
}