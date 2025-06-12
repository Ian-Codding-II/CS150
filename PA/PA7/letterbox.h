/**
 * @file letterbox.h
 * @author Ian Codding II
 * @brief Letterbox Declaration File
 * @version 0.1
 * @date 2025-03-17
 *
 * @copyright Copyright (c) 2025
 *
 */
// TODO: Guard code start
#ifndef LETTERBOX_H
#define LETTERBOX_H
// TODO: Include all necessary header files
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <limits>
#include <vector>

using namespace std;

int loadDataToArray(string array[], string deffOfArray[], int sise, ifstream &file);
string randomWord(vector<string> vect, int &hint);
void initializeAlphabet(char array[], int arraySize);
void initializeDashes(char array[], int arraySize);

// TODO: Guard code end
#endif