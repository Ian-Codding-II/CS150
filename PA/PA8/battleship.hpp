/**
 * @file battleship.hpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief This is where we initialize chaos
 * @version 0.1
 * @date 2025-04-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef BATTLESHIP_HPP
#define BATTLESHIP_HPP

#include "global.hpp"
#include "Board.hpp"

struct Inputs {
    void waitForEnter();
    void badInput();
    void coordinateCheck(char &y, int &x);
};

// Defining functions
void displayMenu(const string array[], int size, int maxOption, int &option);

// was not as beautiful as vertical
string checkHorizontal(Board &board, int x, int y, int length);

// This one is beautifull
string checkVertical(Board &board, int x, int y, int length);

// Finally likes me
void RandomShipPlace(Board &board);

// Places ships
void ManualShipPlace(Board &board);

// works now
void PlaceShip(Board &board, int x, int y, string direction, const Ship &ship);

// int selectWhoStartsFirst();
bool selectWhoStartsFirst(int a);

// void checkShotIsAvailable();
void checkShotIsAvailable(bool whichGame, char Board[][NUM_ROWS][NUM_COLS], int pl, char &y, int &x);

// bool isWinner();
bool isWinner(char Board[][NUM_ROWS][NUM_COLS], int pl, char shipSunk[]);

// void outputCurrentMove();
void outputCurrentMove(ofstream &Battleship, const int playerI, const char y, const int x,const char shipsunk[], const int shipHitI);

// void outputStats();
void outputStats(bool player, ofstream &Battle, Stats player1, Stats player2);

// void computerGame();
void computerGame(ofstream &battleLog, Board &computerBoard, Board &playerBoard);

// void playerGame();
void playerGame(ofstream &battleLog, Board &player1Board, Board &player2Board, bool player);

// for in game changes to the dumy board
int updateBoard(char Board[][NUM_ROWS][NUM_COLS], int pl, const char y, const int x);


#endif