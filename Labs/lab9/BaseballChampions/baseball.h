/**
 * @file baseball.h
 * @author Ian Codding II
 * @brief Declaration file
 * @version 0.1
 * @date 2025-03-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
// START GUARD CODES
#ifndef BASEBALL_H
#define BASEBALL_H
// INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const int NUM_TEAMS = 29;
const int NUM_WINNERS = 64;

void loadFromFileToArray(ifstream &file, string array[], int size);

// END GUARD CODE
#endif