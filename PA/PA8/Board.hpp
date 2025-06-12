/**
 * @file    Board.hpp
 * @author  Ian Codding II, Balin Becker, Ryan Flores
 * @brief   Board class declaration file.
 * @version 0.1
 * @date    2025-04-02
 * 
 * @copyright Copyright (c) 2025
 */


#ifndef BOARD_HPP
#define BOARD_HPP

#include "global.hpp"

class Board {
    public:
        Board();
        void updateTile(int row, int col, char character);
        void display(bool showShips);
        char checkTile(int row, int col);

    private:
        char board[NUM_ROWS][NUM_COLS];
        
};

#endif