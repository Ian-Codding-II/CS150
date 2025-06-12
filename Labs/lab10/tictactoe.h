/**
 * @file tictactoe.h
 * @author Ian Codding II
 * @brief initializing my functions
 * @version 0.1
 * @date 2025-03-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include <iomanip>
using namespace std;

//global variables
const int NUM_ROWS = 3;
const int NUM_COLS = 3;

//my functions
void initializeBoard(char board[][NUM_COLS]);
void displayBoard(const char board[][NUM_COLS]);
void updateBoard(char board[][NUM_COLS], int row, int col, char playerToken);
bool isValidMove(const char board[][NUM_COLS], int row, int col);
bool isWin(const char board[][NUM_COLS], char playerToken);
bool isFull(const char board[][NUM_COLS]);

#endif