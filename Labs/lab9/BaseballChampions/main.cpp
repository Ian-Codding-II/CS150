/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief displays to the user how many wins the team had
 * @version 0.1
 * @date 2025-03-20
 *
 * @copyright Copyright (c) 2025
 *
 */
// INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
#include "baseball.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string input;

    ifstream teamFile;
    teamFile.open("../data/Teams.txt");
    // 1. Check if file opened successfully, if not exit the program
    if (teamFile.fail())
    {
        cout << "\nError opening file, shuting down. \n\n";
        exit(1);
    }
    // 2a. Declare an array of strings to store data for baseball teams
    string team[NUM_TEAMS];
    // 2b. Load data from teamFile to an array by calling loadTeamsFromFileToArray
    loadFromFileToArray(teamFile, team, NUM_TEAMS);
    // 3. Close the file stream
    teamFile.close();

    ifstream winnersFile;
    winnersFile.open("../data/WorldSeriesWinners.txt");
    // 1. Check if file opened successfully, if not exit the program
    if (winnersFile.fail())
    {
        cout << "\nError opening file, shuting down. \n\n";
        exit(1);
    }
    // 2a. Declare an array of strings to store data for world series winners
    string winners[NUM_WINNERS];
    // 2. Load data from winnersFile to an array by calling loadWinnersFromFileToArray
    loadFromFileToArray(winnersFile, winners, NUM_WINNERS);
    // 3. Close the file stream
    winnersFile.close();
    // Read the instructions on what else you need to finish this program

    do
    {
        for (string value : team)
        {
            cout << value << "\n";
        }

        cout << "Please select a team from the list: ";
        getline(cin, input);
        
        if (input == "quit")
        {
            exit(1);
        }

        bool isTeamValid = false;
        for (string value : team)
        {
            if (value == input)
            {
                isTeamValid = true;
            }
        }

        if (!isTeamValid)
        {
            cout << "\nThat is not a valid team. \n\n";
            continue;
        }

        int numWin = 0;
        for (string value : winners)
        {
            if (input == value)
            {
                numWin++;
            }
        }
    
        if (input != "quit")
        {
        cout << input << " won the world series " << numWin << " time\n\n";
        }
        
        
    } while (input != "quit");

    return 0;
}