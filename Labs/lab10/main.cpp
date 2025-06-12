/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief run through the game of tictactoe (with the option to play again)
 * @version 0.1
 * @date 2025-03-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <limits>
#include "tictactoe.h"
using namespace std;

int main()
{
    const int NUM_PLAYERS = 2;
    const char PLAYER_TOKEN[NUM_PLAYERS] = {'X', 'O'};
    char playAgain;//input used later to determine if you play again

    // 1. Create a two-dimensional char array with three rows and three columns as the game board.
    char board[NUM_ROWS][NUM_COLS];
    // 2. Each element of the array should be initialized with a value such as an asterisk '*'.
    do
    {
        initializeBoard(board);
        // 3. The program should display the initial board configuration and then
        displayBoard(board);
        // 4. Start of the game loop that does the following:
        // game Loop
        bool isDone = false; // game over???
        while (!isDone)
        {
            //    a. Have player 1 select a board location by entering a row and column number.
            int row, col;
            while (1)
            {
                cout << "Player " << (NUM_PLAYERS - 1) << ":\n"
                     << "Enter a row, column: ";
                cin >> row >> col;
                if (!isValidMove(board, row - 1, col - 1))
                {
                    cout << "row and colomm most be from 1 to " << NUM_COLS << "\n";
                }
                else
                {
                    break;
                }
            }
            //    b. Then redisplay the board with an 'X' replacing the '*' in the chosen location.
            updateBoard(board, row - 1, col - 1, PLAYER_TOKEN[NUM_PLAYERS - 2]);
            displayBoard(board);

            //    c. If there is no winner yet and the board is not yet full, continue below, otherwise game ends
            if (isWin(board, PLAYER_TOKEN[NUM_PLAYERS - 2]))
            {
                cout << "\nPlayer 1 is the winner!!!\n";
                break;
            }
            //    f. If there is no winner yet and the board is not yet full, repeat the loop, otherwise game ends
            if (isFull(board))
            {
                cout << "\nThis is a cats game!\n";
                break;
            }
            //    d. Have player 2 select a board location by entering a row and column number.
            while (1)
            {
                cout << "Player " << (NUM_PLAYERS) << ":\n"
                     << "Enter a row, column: ";
                cin >> row >> col;
                if (!isValidMove(board, row - 1, col - 1))
                {
                    cout << "row and colomm most be from 1 to " << NUM_COLS << "\n";
                }
                else
                {
                    break;
                }
            }
            //    e. Then redisplay the board with an 'O' replacing the '*' in the chosen location.
            updateBoard(board, row - 1, col - 1, PLAYER_TOKEN[NUM_PLAYERS - 1]);
            displayBoard(board);
            //    c. If there is no winner yet and the board is not yet full, continue below, otherwise game ends
            if (isWin(board, PLAYER_TOKEN[NUM_PLAYERS - 1]))
            {
                cout << "\nPlayer 2 is the winner!!!\n";
                break;
            }
            //    f. If there is no winner yet and the board is not yet full, repeat the loop, otherwise game ends
            if (isFull(board))
            {
                cout << "\nThis is a cats game!\n";
                break;
            }
        }
        cout << "Do yu want to play again?? (yes/no): ";
        cin >> playAgain;//take the first input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//type as much as you like cause it all gets ignored
        cout << "\n";
    } while (tolower(playAgain) == 'y');//plesase try at least twice... i had to test it many times

        return 0;
}