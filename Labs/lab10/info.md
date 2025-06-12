# Lab 9: TicTacToe - Two Dimensional Array
> **COMMON ERROR IN THIS LAB**: C++ arrays uses zero-based indexing.

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Create and use a two-dimensional array

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Programming Challenge, Gaddis textbook, Chapter 8, Arrays


## Lab 10.1 - TicTacToe
Write a C++ program that allows two players to play a game of Tic-Tac-Toe. 

- [ ] You **MUST** use functions for this lab and use the three file structure (`main.cpp`, `tictactoe.cpp`, and `tictactoe.h`). Below are constant variables and functions that you **MUST USE** to complete this lab. If you want to create an additional set of functions, it is ok to do.

   * `const int NUM_PLAYERS = 2`
       * **local** constant integer used to determined number of players
   * `const char PLAYER_TOKEN[NUM_PLAYERS] = {'X', 'O'}`
       * **local** constant array of characters to identify the player's token
   * `const int NUM_ROWS = 3`
       * **global** constant integer used to determine number of rows in the TicTacToe board
   * `const int NUM_COLS = 3`
       * **global** constant integer used to determine number of columns in the TicTacToe board
   * `void initializeBoard(char board[][NUM_COLS])`
       * called to initialize all elements in the 2d array with `'*'`
   * `void displayBoard(const char board[][NUM_COLS])`
       * display the board on the screen as shown in the example board display below
   * `void updateBoard(char board[][NUM_COLS], int row, int col, char playerToken)`
       * update the board's row and column element with the `playerToken`
   * `bool isValidMove(const char board[][NUM_COLS], int row, int col)`
       * return `true` if the `row` and `col` is a valid move, otherwise, return `false`
   * `bool isWin(const char board[][NUM_COLS], char playerToken)`
       * return `true` if the current player has won, otherwise, return `false`
   * `bool isFull(const char board[][NUM_COLS])` 
      * return true if the board is full, otherwise, return false
### Game Loops

Almost every game has a game loop. A game loop runs continuously during gameplay. Each turn of the loop,

* it processes user input,
* updates the game state, and
* renders the game

It also tracks the passage of time to control the rate of gameplay. However, since we will not be doing any game animation, this doesn't really matter in this case.
````
// game setup / initialization

// game Loop
bool isDone = false; // game over???
while (!isDone)
{
    // process input
    // update
    // render
}
````

### Game Psuedocode
- [ ] Write the game using psuedocode 
```
1. Create a two-dimensional char array with three rows and three columns as the game board. 
2. Each element of the array should be initialized with a value such as an asterisk '*'. 
3. The program should display the initial board configuration and then 
4. Start of the game loop that does the following:
   a. Have player 1 select a board location by entering a row and column number. 
   b. Then redisplay the board with an 'X' replacing the '*' in the chosen location. 
   c. If there is no winner yet and the board is not yet full, continue below, otherwise game ends
   d. Have player 2 select a board location by entering a row and column number. 
   e. Then redisplay the board with an 'O' replacing the '*' in the chosen location.
   f. If there is no winner yet and the board is not yet full, repeat the loop, otherwise game ends
```

### Game Ends
- [ ] The loop should continue until a player has won or a tie has occured, then display a message indicating who won, or reporting a tie.
   * Player 1 wins when there are three `'X'` characters in a row, a column, or a diagonal on the game board.
   * Player 2 wins when there are three `'O'` characters in a row, a column, or a diagonal on the game board.
   * A tie occurs when all of the locations on the board are full, but there is no winner.

### Other Requirements
- [ ] **Input validation**:  Only allow legal moves to be entered.  The row and column MUST be 1, 2, or 3. The selected board location must currently be empty (still have an `'*'` character).
- [ ] Commit your code throughout the development process. 
- [ ] Add file header comments and function header comments. Also add line comments when necessary.
- [ ] Present your work to the instructor and prepare to answer questions.
- [ ] Make the changes per the instructor's review and do a final push of your code to the GitHub repo.

**Sample Board Display**
```
          1            2           3
          
1         *            *           *

2         *            *           *

3         *            *           *

Player 1:
Enter a row, column: 2 2 


          1            2           3
          
1         *            *           *

2         *            X           *

3         *            *           *

Player 2:
Enter a row, column: 3 1 


          1            2           3
          
1         *            *           *

2         *            X           *

3         O            *           *
```



## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**

