/**
 * @file baseball.cpp
 * @author Ian Codding II
 * @brief my functions
 * @version 0.1
 * @date 2025-03-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "baseball.h"
/**
 * @brief load data from file to my array
 *
 * @param file
 * @param array
 * @param size
 */
void loadFromFileToArray(ifstream &file, string array[], int size)
{
    int team = 0;
    while (getline(file, array[team]) && team < size)
    {
        team++;
    }
}