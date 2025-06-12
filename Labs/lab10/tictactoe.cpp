/**
 * @file tictactoe.cpp
 * @author Ian Codding II
 * @brief giving my functions a body
 * @version 0.1
 * @date 2025-03-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "tictactoe.h"

/**
 * @brief make board all starrs
 * 
 * @param board 
 */
void initializeBoard(char board[][NUM_COLS])
{
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            board[i][j] = '*';
        }
    }
}

/**
 * @brief shows the board in the desired position.
 * with the main board still changable
 * 
 * @param board 
 */
void displayBoard(const char board[][NUM_COLS])
{
    cout << " ";
    for (int num = 0; num < NUM_COLS; num++)
    {
        cout << setw(3) << (num + 1);
    }
    cout << "\n";
    for (int i = 0; i < NUM_ROWS; i++)
    {
        cout << (i + 1);
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << setw(3) << board[i][j];
        }
        cout << "\n";
    }
}

/**
 * @brief this will put an X or an O depending on which player.
 * then place it in there inputed coordinates
 * 
 * @param board 
 * @param row 
 * @param col 
 * @param playerToken 
 */
void updateBoard(char board[][NUM_COLS], int row, int col, char playerToken)
{
    board[row][col] = playerToken;
}

/**
 * @brief checks if user inputs a playable destination
 * 
 * @param board 
 * @param row 
 * @param col 
 * @return true 
 * @return false 
 */
bool isValidMove(const char board[][NUM_COLS], int row, int col)
{
    if (0 > row || row > NUM_ROWS - 1 || 0 > col || col > NUM_COLS - 1)
    {
        return false;
    }
    if (board[row][col] == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief checks if there is a row/colomm/diagnal of the same type of token
 * 
 * @param board 
 * @param playerToken 
 * @return true 
 * @return false 
 */
bool isWin(const char board[][NUM_COLS], char playerToken)
{
    for (int row = 0; row < NUM_ROWS; row++) //checks the rows
    {

        if (board[row][0] == playerToken && board[row][1] == playerToken && board[row][2] == playerToken)
        {
            return true;
        }
    }
    for (int col = 0; col < NUM_COLS; col++) //checks the colomms
    {
        if (board[0][col] == playerToken && board[1][col] == playerToken && board[2][col] == playerToken)
        {
            return true;
        }
    }
    int row = 0, col = 0; //These last two if's will check the diagnals
    if (board[row][col] == playerToken && board[row + 1][col + 1] == playerToken && board[row + 2][col + 2] == playerToken)
    {
        return true;
    }
    else if (board[row][col + 2] == playerToken && board[row + 1][col + 1] == playerToken && board[row + 2][col] == playerToken)
    {
        return true;
    }

    return false;
}

/**
 * @brief checks if there are no more playable moves
 * 
 * @param board 
 * @return true 
 * @return false 
 */
bool isFull(const char board[][NUM_COLS])
{
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            if (board[i][j] == '*')
            {
                return false;
            }
        }
    }
    return true;
}