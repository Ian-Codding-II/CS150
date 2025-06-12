/**
 * @file    Board.cpp
 * @author  Ian Codding II, Balin Becker, Ryan Flores
 * @brief   Board class definition file.
 * @date    2025-04-02
 */

#include "Board.hpp"
#include "global.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Construct a new Board:: Board object
 * 
 */
Board::Board() {
    for (int row = 0; row < NUM_ROWS; row++) {
        for (int column = 0; column < NUM_COLS; column++) {
            board[row][column] = EMPTY_TILE;
        }
    }
}

/**
 * @brief Updates character at tile with character
 * @param row Row Value
 * @param col Column Value
 * @param character Character Value to replace (row, col) with
 */
void Board::updateTile(int row, int col, char character) {
    board[row][col] = character;
}

/**
 * @brief Prints board to terminal
 * @param showShips True/False Print with ships visible
 */
void Board::display(bool showShips) {
    cout << "  ";
    for (int i = 0; i < NUM_COLS; i++) {
        cout << setw(3) << i;
    } 
    cout << endl;
    for (int row = 0; row < NUM_ROWS; row++) {
        char character = 'A' + row;
        cout << character << "|";
        for (int column = 0; column < NUM_COLS; column++) {
            if (showShips == false) {
                cout << setw(3);
                                
                // I changed a little bit in your if and added this because it 
                // would always show the ships (not including the Carrier)
                if (board[row][column] == HIT_TILE || board[row][column] == MISS_TILE)
                {
                    cout << board[row][column];
                }else {
                    cout << EMPTY_TILE;
                }
                
            } else {
                cout << setw(3);
                cout << board[row][column];
            }
        }
        cout << endl;
    } 
}

/**
 * @brief checks the tile of a given coordinate 
 * 
 * @param row 
 * @param col 
 * @return char 
 */
char Board::checkTile(int row, int col) {
    return board[row][col];
}