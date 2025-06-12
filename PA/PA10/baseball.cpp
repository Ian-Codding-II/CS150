/**
 * @file baseball.cpp
 * @author Ian Codding II
 * @brief my functions
 * @version 0.1
 * @date 2025-05-06
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "baseball.hpp"

void loadFromFileToVector(ifstream &file, vector<Team> &vec)
{
    string line;
    // Go through the file and put each team in the vector once
    // Each time you see a new name add one to the number of wins

    while (getline(file, line))
    {
        // Check if team is already in the vector
        auto it = find_if(vec.begin(), vec.end(), [&line](const Team &t)
                          { return t.teamName == line; });

        if (it == vec.end())
        {
            // New team, add with 1 win
            vec.push_back(Team{line, 1});
        }
        else
        {
            // Team already exists, increment wins
            it->numberOfWins += 1;
        }
    }
}
void displayVector(const vector<Team> &vec)
{
    cout << "   Team name             Number of wins\n"
         << "-------------------------------------------\n";

    for (long unsigned i = 0; i < vec.size(); i++)
    {
        cout << left << setw(32) << vec[i].teamName;
        cout << left << setw(4) << vec[i].numberOfWins << endl;
    }
}

void insertionSort(vector<Team> &vec)
{
    int size = vec.size();
    for (int startScan = 1; startScan < size; startScan++)
    {
        Team key = vec[startScan];
        int index = startScan - 1;
        while (index >= 0 && vec[index].numberOfWins < key.numberOfWins)
        {
            vec[index + 1] = vec[index];
            --index;
        }
        vec[index + 1] = key;
    }
}