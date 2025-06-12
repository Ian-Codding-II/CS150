/**
 * @file baseball.hpp
 * @author Ian Codding II
 * @brief Declaration file
 * @version 0.1
 * @date 2025-05-06
 *
 * @copyright Copyright (c) 2025
 *
 */
// START GUARD CODES
#ifndef BASEBALL_HPP
#define BASEBALL_HPP
// INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Team
{
    string teamName = "";
    int numberOfWins = 0;
    // Comparison operator to check if two teams are equal (based on teamName)
    bool operator==(const Team &other) const
    {
        return teamName == other.teamName;
    }
};

void loadFromFileToVector(ifstream &file, vector<Team> &vec);
void displayVector(const vector<Team> &vec);
void insertionSort(vector<Team> &vec);

// END GUARD CODE
#endif