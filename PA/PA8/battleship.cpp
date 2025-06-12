/**
 * @file battleship.cpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief This is where we define chaos
 * @version 0.1
 * @date 2025-04-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "battleship.hpp"
#include "global.hpp"
#include "animations.hpp"

/**
 * @brief checks the coordinates validity
 * 
 * @param y 
 * @param x 
 */
void Inputs::coordinateCheck(char &y, int &x) {
    Inputs input;
    while (1) {
        cout << "\nEnter a row and column value seperated by a space: ";
        string y2;
        cin >> y2; // row
        for (char &i : y2) { // go through the string and make it lowercase
            i = tolower(i);
        }
        if (y2 == "quit") { // If it says quit then go back
            y = y2[0];
            return;
        }
        cin >> x; // column
        y = y2[0]; // takes only the first letter
        cout << endl;
        if (cin.fail()) {
            input.badInput();
            continue;
        }
        y = toupper(y);
        if ((y <= 74) && (x <= 9) && (y >= 65) && (x >= 0)) { // checks if its in bounds and breaks if we are
            break;
        }
        input.badInput(); // if we are not in bounds then say bad input and go again
    }
}

/**
 * @brief waits untel the user clicks enter
 * 
 */
void Inputs::waitForEnter() {
    cout << "Press Enter to continue...";
    
    if (cin.peek() != '\n') {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear junk up to newline
    }
    
    cin.get(); // Wait for Enter
}

/**
 * @brief clears buffer if we call
 * 
 */
void Inputs::badInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "That input is not an option.";
}

/**
 * @brief Create a function welcomeScreen() that displays an 
 *         initial program welcome message along with the rules of Battleship.
 * 
 * @param array this is the menue givin
 * @param size how many lines of the array
 * @param maxOption this is for the check for wrong options
 * @param option the users option is returned to where this is called
 */
void displayMenu(const string array[], int size, int maxOption, int &option) {
    system("clear");
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    do {
        cout << "\nEnter a menu option: ";
        cin >> option;
        if (cin.fail() || option < 0 || option > maxOption) {
            cout << "\nInvalid Option!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            option = -1;
        }
    } while (cin.fail() || option < 0 || option > maxOption);
}

/**
 * @brief Create a function selectWhoStartsFirst() that 
 * determines if Player1 or Player2 goes first in the game.
 * 
 * @param a length of posible particapents
 * @return true 
 * @return false 
 */
bool selectWhoStartsFirst(int a) {
    int who = (rand()%a);
    return who;
}

/**
 * @brief Create a function checkShotIsAvailable() returns true 
 * if position entered is still available, otherwise return false. 
 * Note, each player should NOT be allowed to enter the same position.
 * 
 * @param whichGame This is an option of playerGame or computerGame
 * @param Board The dumy board for updates
 * @param pl Which players board are we checking
 * @param y The row the user enters
 * @param x The column the user enters
 */
void checkShotIsAvailable(bool whichGame, char Board[][NUM_ROWS][NUM_COLS], int pl, char &y, int &x) {
    bool maybe = false;

    do {
        int y2 = (y - 65);
        maybe = false;
        if (Board[pl][y2][x] != MISS_TILE && Board[pl][y2][x] != HIT_TILE) {
            maybe = true;
        } else {
            if (whichGame) {
                cout << "That shot has already been tried\n";
                while (1) {
                    cout << "\nPlease enter start row and column of your target: ";
                    cin >> y >> x;
                    
                    cout << endl;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "That input is not an option.";
                        continue;
                    }
                    y = toupper(y);
                    if ((y <= 74) && (x <= 9) && (y >= 65) && (x >= 0)) {
                        break;
                    }
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "That input is not an option.";
                }
            } else {
                while (1) {
                    y = 'A' + rand() % 10; x = rand() % 10;
    
                    y = toupper(y);
                    if ((y <= 74) && (x <= 9) && (y >= 65) && (x >= 0)) {
                        break;
                    }
                }
            }
        }
    } while (!maybe);

    return;
}

/**
 * @brief Create a function isWinner() that determines if a winner exists.
 *          or if a ship is sunk
 * 
 * @param Board checks the dumy board
 * @param pl which player determines which board
 * @param shipSunk If we find a ship gone then it puts the symbal inside
 * @return true 
 * @return false 
 */
bool isWinner(char Board[][NUM_ROWS][NUM_COLS], int pl, char shipSunk[]) {
    bool allGone = true; // if there are no ship symbols on the board
    bool shipGone;
    for (int i = 0; i < 5; i++) { // Runs through all of the ship symbols to see if it cant find it
        shipGone = false; // for a singal ship (at index i for the ship symbols) sets that ship to not all gone
        for (int j = 0; j < NUM_ROWS; j++) { // run through the rows
            for (int k = 0; k < NUM_COLS; k++) { // and the coloms to check the board
                if (Board[pl][j][k] != SHIPS[i].mSymbol) { // for every time the symbol at i cant be found, say that ship is gone
                    shipGone = true;
                } else { // if you do find the symbol at i, ship is not gone then the player is not finished.
                    allGone = false;
                    shipGone = false;
                    break; // break out of cols
                }
            }
            if (!shipGone) { // if you said break out of cols then break out of rows
                break;
            }
        }
        if (shipGone) { // if there is indead a symbol missing, then we say we say that ship has sunk at index i
            shipSunk[i] = SHIPS[i].mSymbol;
        }
    }
    return allGone;
}

/**
 * @brief Create a function updateBoard() that updates the board every time a shot is taken. 
 * Updates the board position with '*' indicates a hit and 'm' indicates a miss. 
 * Function also returns an integer. If the shot is a miss, then function returns -1, 
 * otherwise if it is a hit, function return 0 for hitting the carrier, 1 for hitting the battleship,
 * 2 for hitting the cruiser, 3 for hitting the submarine, and 4 for hitting the destroyer.
 * 
 * @param Board Dumy board to hold the changed values
 * @param pl which player determines which board
 * @param y The row we check
 * @param x The column we check
 * @return int 
 */
int updateBoard(char Board[][NUM_ROWS][NUM_COLS], int pl, const char y, const int x) {
    int y2 = (y - 65); // turn there char to an int
    int posibleHit = -1; // set this to something that is not 0 or 1
    for (int i = 0; i < NUM_SHIPS; i++) { // run through all the ships
        if (Board[pl][y2][x] == SHIPS[i].mSymbol) { // if the place of there coordinates is a letter replace it with a star
            Board[pl][y2][x] = HIT_TILE;
            return i; // and return what index of ship symbol it was
        }
    }
    Board[pl][y2][x] = MISS_TILE; // if we dont have a symbol there, replace it with a m

    return posibleHit; // return -1 for a check we have later indicating it was a miss
}

/**
 * @brief Create a function outputCurrentMove() that writes 
 * the position of the shot taken by the current player to the log file.
 * It also writes whether or not it was a hit, miss, and if the ship was sunk.
 * 
 * @param Battleship This is the log file we wright too
 * @param playerI This determines which players turn
 * @param y the row
 * @param x the column
 * @param shipsunk which ship, if any, that sunk
 * @param shipHitI Index of a posible missing ship as well as what determines a hit or miss
 */
void outputCurrentMove(ofstream &Battleship, const int playerI, const char y, const int x,const char shipsunk[], const int shipHitI) {
    Battleship << "Player " << 1 + playerI << ": " << y << "," << x << " "; // Tells what player and there entered coordinate
    shipHitI == -1 ? Battleship << "\"miss\"" : Battleship << "\"hit\""; // If statment: If there was no hit, say miss, other wise do the reverse

    if (shipsunk[shipHitI] != EMPTY_TILE && shipHitI != -1) { // If that whole ship is gone, say so
        Battleship << " and sunk the " << SHIPS[shipHitI].mName << "!";
    }
    Battleship << "\n";
}

/**
 * @brief Create a function outputStats() that writes 
 * the statistics collected on each player to the log file.
 * 
 * @param player Used to tell who won the game
 * @param Battle battle log
 * @param player1 player ones' stats
 * @param player2 player twos'stats
 */
void outputStats(bool player, ofstream &Battle, Stats player1, Stats player2) {
    player1.recalculate();
    Battle << "Player 1 " << (player ? "loses, Player 2 wins!" : "wins, Player 2 loses!");

    Battle << "\n\n*** Player 1 Stats ***\n";
    Battle << "Number Hits   :  " << player1.mTotalHits   // Total Hits
            << "\nNumber Misses :  " << player1.mTotalMisses // Total Misses
            << "\nTotal Shots   :  " << player1.mTotalShots // Total shots
            << fixed << setprecision(3) << showpoint
            << "\nHit/Miss Ratio:  " << player1.mHMRatio << "%\n\n\n"; // Total Hits devided by total shots
    
    player2.recalculate();
    Battle << "*** Player 2 Stats ***\n";
    Battle << "Number Hits   :  " <<  player2.mTotalHits  // Total Hits
            << "\nNumber Misses :  " << player2.mTotalMisses // Total Misses
            << "\nTotal Shots   :  " << player2.mTotalShots // Total shots
            << fixed << setprecision(3) << showpoint
            << "\nHit/Miss Ratio:  " << player2.mHMRatio << "%"; // Total Hits devided by total shots
    Battle.flush();
}

/**
 * @brief runs through the game of battle ship against a cpu
 * 
 * @param battleLog 
 * @param computerBoard 
 * @param playerBoard 
 */
void computerGame(ofstream &battleLog, Board &computerBoard, Board &playerBoard) {
    Stats player1Stats;
    Stats player2Stats;
    Inputs input;
    Animation animation;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n\nPlayer2 (Computer's) board has been generated.\n\n";
    // //displayBoard(true, board); // Test

    // Determine who starts
    bool player = selectWhoStartsFirst(2);
    cout << "player " << 1 + player << " has been randomly selected to go first.\n\n";
    input.waitForEnter();
    char checkBoard[2][NUM_ROWS][NUM_COLS];
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            checkBoard[0][i][j] = computerBoard.checkTile(i, j);

            checkBoard[1][i][j] = playerBoard.checkTile(i, j);
        }
    }

    bool isDone = false; // game over???
    while (!isDone) {
        // Display the boards to the screen
        cout << "\n\n" << "         Player 1's Board\n\n";
        playerBoard.display(true);

        cout << "\n\n" << "         Player 2's Board\n\n";
        computerBoard.display(false);

        // Have them enter a target that is valid!
        int x;
        char y;
        if (player) {
            while (1) {
                y = 'A' + rand() % 10; x = rand() % 10;

                y = toupper(y);
                if ((y <= 74) && (x <= 9) && (y >= 65) && (x >= 0))
                {
                    break;
                }
            }
        } else {
            input.coordinateCheck(y, x);
            if (y == 'q') return;
        }
        bool whichGame = !player; // playing against cpu
        checkShotIsAvailable(whichGame, checkBoard, player, y, x);
      
        // Update the boards
        char shipSunk[NUM_SHIPS];
        for (int i = 0; i < NUM_SHIPS; i++) {
            shipSunk[i] = EMPTY_TILE;
        }
        int posibleHit = updateBoard(checkBoard, player, y, x);
        for (int i = 0; i < NUM_ROWS; i++) {
            for (int j = 0; j < NUM_COLS; j++) {
                if (!player) {
                    computerBoard.updateTile(i, j, checkBoard[player][i][j]);
                } else {
                    playerBoard.updateTile(i, j, checkBoard[player][i][j]);
                }
            }
        }

        if (posibleHit != -1) {
            system("clear");
            animation.Hit(true);
            cout << "\nPlayer " << player +1;
            cout << "\nCoordinate " << y << "-" << x << " is a hit!\n";
            player ? player2Stats.mTotalHitsVec.push_back(1) : 
            player1Stats.mTotalHitsVec.push_back(1); // If player2's turn and they hit,
        } else {                                    //  put a 1 in the vector else do so for player1
            system("clear");
            animation.Hit(false);
            cout << "\nPlayer " << player +1;
            cout << "\nCoordinate " << y << "-" << x << " is a miss\n";
            player ? player2Stats.mTotalMissesVec.push_back(1) : 
            player1Stats.mTotalMissesVec.push_back(1); // If player2's turn and they miss,
        }                                              //  put a 1 in the vector else do so for player1

        // Check if someone has sunk the other player completly
        bool winner = isWinner(checkBoard, player, shipSunk);
        
        // Outputs stats to the log file
        outputCurrentMove(battleLog, player, y, x, shipSunk, posibleHit);
            
        if (shipSunk[posibleHit] != EMPTY_TILE && posibleHit != -1)
        {
            cout << "The " << SHIPS[posibleHit].mName << " has been sunk!\n\n";
        }

        player = !player;
        if (winner) {
            cout << "All ships on player " << 1 + player << "'s board have been sunk.\n";
        }

        player = !player;
        if (winner) {
            cout << "Player " << 1 + player << " is the winner!\n\n";
            input.waitForEnter();
            !player ? cin.get() : player;

            break;
        }
        input.waitForEnter();
        !player ? cin.get() : player;

        battleLog.flush();
        // If not then clear the screen
        system("clear");
        
        // Switch player for turn
        player = !player;
        cout << "Player " << 1 + player << "'s turn.\n\n";
    }
    // Outputs stats to the log file
    outputStats(player, battleLog, player1Stats, player2Stats);
}

/**
 * @brief runs through the game of battle ship against a friend
 * 
 * @param battleLog 
 * @param player1Board 
 * @param player2Board 
 * @param player 
 */
void playerGame(ofstream &battleLog, Board &player1Board, Board &player2Board, bool player) {
    Stats player1Stats;
    Stats player2Stats;
    Inputs input;
    Animation animation;
    cout << "Player " << 1 + player << "\n";
    char checkBoard[2][NUM_ROWS][NUM_COLS];
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            checkBoard[0][i][j] = player1Board.checkTile(i, j);

            checkBoard[1][i][j] = player2Board.checkTile(i, j);
        }
    }
    bool isDone = false; // game over???
    while (!isDone) {
        cout << "Press enter when ready. ";
        cin.get();
        // Display the boards to the screen
        cout << "\n\n" << "         Player 1's Board\n\n";
        bool show = !player;
        player1Board.display(show);

        cout << "\n\n" << "         Player 2's Board\n\n";
        player2Board.display(!show);

        // Have them enter a target that is valid!
        int x;
        char y;
        input.coordinateCheck(y, x);
        if (y == 'q') return;

        bool whichGamer = 1; // playing against player
        checkShotIsAvailable(whichGamer, checkBoard, !player, y, x);

        // Update the boards
        char shipSunk[NUM_SHIPS];
        for (int i = 0; i < NUM_SHIPS; i++) {
            shipSunk[i] = EMPTY_TILE;
        }
        int posibleHit = updateBoard(checkBoard, !player, y, x);
        for (int i = 0; i < NUM_ROWS; i++) {
            for (int j = 0; j < NUM_COLS; j++) {
                if (!player) {
                    player2Board.updateTile(i, j, checkBoard[!player][i][j]);
                } else {
                    player1Board.updateTile(i, j, checkBoard[!player][i][j]);
                }
            }
        }

        if (posibleHit != -1) {
            system("clear");
            animation.Hit(true);
            cout << "\nPlayer " << player +1;
            cout << "\nCoordinate " << y << "-" << x << " is a hit!\n";
            player ? player2Stats.mTotalHitsVec.push_back(1) : 
            player1Stats.mTotalHitsVec.push_back(1); // If player2's turn and they hit,
        } else {                                     //  put a 1 in the vector else do so for player1
            system("clear");
            animation.Hit(false);
            cout << "\nPlayer " << player +1;
            cout << "\nCoordinate " << y << "-" << x << " is a miss\n";
            player ? player2Stats.mTotalMissesVec.push_back(1) : 
            player1Stats.mTotalMissesVec.push_back(1); // If player2's turn and they miss,
        }                                              //  put a 1 in the vector else do so for player1

        // Check if someone has sunk the other player completly
        bool winner = isWinner(checkBoard, !player, shipSunk);
        
        // Outputs data to the log file
        outputCurrentMove(battleLog, player, y, x, shipSunk, posibleHit);
        
        if (shipSunk[posibleHit] != EMPTY_TILE && posibleHit != -1) {
            cout << "The " << SHIPS[posibleHit].mName << " has been sunk!\n\n";
        }

        player = !player;
        if (winner) {
            cout << "All ships on player " << 1 + player << "'s board have been sunk.\n";
        }
        player = !player;
        if (winner) {
            cout << "Player " << 1 + player << " is the winner!\n\n";
            input.waitForEnter();
            cin.get();
            break;
        }
        input.waitForEnter();
        cin.get();
        battleLog.flush();
        // If not then clear the screen
        system("clear");
        
        // Switch player for turn
        player = !player;
        cout << "Player " << 1 + player << "'s turn.\n\n";
    }
    // Outputs stats to the log file
    outputStats(player, battleLog, player1Stats, player2Stats);
}

/**
 * @brief runs through all checks for placing the ship
 * 
 * @param board 
 */
void ManualShipPlace(Board &board) {
    Inputs input;
    for (int ship = 0; ship < NUM_SHIPS; ship++) {
        bool ShipPlaced = false;
        do {

            board.display(true);
            int x, direction;
            char y;
            input.coordinateCheck(y, x);
            int y2 = (y - 'A');
            while (1) {
                cout << "\nEnter [0] to place Vertically or [1] to place Horizontally: ";
                cin >> direction;
                if ((direction == 0 || direction == 1) && !cin.fail()) {
                    break;
                }
                input.badInput();
            }
    
            do {
                if (direction) {
                    if (checkHorizontal(board, x, y2, SHIPS[ship].mLength) != "") {
                        cout << "Placed Ship Hori at " << y << ", " << x << endl;
                        PlaceShip(board, x, y2, checkHorizontal(board, x, y2, SHIPS[ship].mLength), SHIPS[ship]);

                        ShipPlaced = true;
                        break;
                    } else {
                        cout << "\nCould not place " << SHIPS[ship].mName << " Horizontally at " << y << ", " << x << endl;
                        break;
                    }
                } else {
                    if (checkVertical(board, x, y2, SHIPS[ship].mLength) != "") {
                        cout << "Placed Ship Vert at " << y << ", " << x << endl;
                        PlaceShip(board, x, y2, checkVertical(board, x, y2, SHIPS[ship].mLength), SHIPS[ship]);

                        ShipPlaced = true;
                        break;
                    } else {
                        cout << "\nCould not place " << SHIPS[ship].mName << " Vertically at " << y << ", " << x << endl;
                        break;
                    }
                }
            } while (true);
        } while (!ShipPlaced);
    }
}

/**
 * @brief Randomly places ships across the given board
 * @param board Reference to target board
 */
void RandomShipPlace(Board &board) {

    for (int ship = 0; ship < NUM_SHIPS; ship++) {

        bool ShipPlaced = false;
        do {
            rand();
            int direction = rand() % 2;
            rand();
            int y = rand() % NUM_ROWS;
            char y2 = 'A' + y;
            rand();
            int x = rand() % NUM_COLS;
            
            for (int attempt = 0; attempt < 2; attempt++) {
                if (direction == 1) { // Horizontal
                    if (checkHorizontal(board, x, y, SHIPS[ship].mLength) != "") {
                        cout << "Placed " << SHIPS[ship].mName << " Hori at " << y2 << ", " << x << endl;
                        PlaceShip(board, x, y, checkHorizontal(board, x, y, SHIPS[ship].mLength), SHIPS[ship]);
                        ShipPlaced = true;
                        break;
                    }
                } else { // Vertical
                    if (checkVertical(board, x, y, SHIPS[ship].mLength) != "") {
                        cout << "Placed " << SHIPS[ship].mName << " Vert at " << y2 << ", " << x << endl;
                        PlaceShip(board, x, y, checkVertical(board, x, y, SHIPS[ship].mLength), SHIPS[ship]);
                        ShipPlaced = true;
                        break;
                    }
                }
                direction = !direction; // Flip direction
            }
        } while (!ShipPlaced);
    }
}

/**
 * @brief        Checks entire row for empty tiles
 * 
 * @param board  Reference to target board
 * @param x      X coordinate --Column
 * @param y      Y coordinate --Row
 * @param length length of valid space to check
 * 
 * @returns      String of first direction that fits length
 */
string checkHorizontal(Board &board, int x, int y, int length) {
    // Check to right from x, y
    int EmptyTileCombo = 0;
    for (int column = x; column < NUM_COLS && column >= 0; column++) {
        if (board.checkTile(y, column) != EMPTY_TILE) {
            break;
        } else {
            EmptyTileCombo++;
            if (EmptyTileCombo >= length) {
                return "Right";
            }
        }
    }
    EmptyTileCombo = 0;
    // Check to left from x, y
    for (int column = x; column >= 0 && column <= NUM_COLS; column--) {
        if (board.checkTile(y, column) != EMPTY_TILE) {
            break;
        } else {
            EmptyTileCombo++;
            if (EmptyTileCombo >= length) {
                return "Left";
            }
        }
    }

    return "";
}

/**
 * @brief        Checks entire column for empty tiles
 * 
 * @param board  Reference to target board
 * @param x      X coordinate --Column
 * @param y      Y coordinate --Row
 * @param length length of valid space to check
 * 
 * @returns      String of first direction that fits length
 */
string checkVertical(Board &board, int x, int y, int length) {
    // Check to down from x, y
    int EmptyTileCombo = 0;
    for (int row = y; row < NUM_ROWS && row >= 0; row++) {
        if (board.checkTile(row, x) != EMPTY_TILE) {
            break;
        } else {
            EmptyTileCombo++;
            if (EmptyTileCombo >= length) {
                return "Down";
            }
        }
    }

    EmptyTileCombo = 0;
    // Check to up from x, y
    for (int row = y; row >= 0 && row < NUM_ROWS ; row--) {
        if (board.checkTile(row, x) != EMPTY_TILE) {
            break;
        } else {
            EmptyTileCombo++;
            if (EmptyTileCombo >= length) {
                return "Up";
            }
        }
    }

    return "";
}

/**
 * @brief Updates given board with 
 * 
 * @param board Reference to target board
 * @param x     X coordinate
 * @param y     Y coordinate
 * @param direction Placement direction
 * @param ship  Ship to place
 */
void PlaceShip(Board &board, int x, int y, string direction, const Ship &ship) {
    if (direction == "Right") {

        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            if ((board.checkTile(y, x + shipPart) != EMPTY_TILE) or (ship.mLength -1 + x > NUM_COLS)) {
                cout << "Cannot place " << ship.mName << endl;
                return;
            }
        }
        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            board.updateTile(y, shipPart + x, ship.mSymbol);
        }

    } else if (direction == "Left") {

        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            if ((board.checkTile(y, x - shipPart) != EMPTY_TILE) or (x - ship.mLength + 1 < 0)) {
                cout << "Cannot place " << ship.mName << endl;
                return;
            }
        }
        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            board.updateTile(y, x - shipPart, ship.mSymbol);
        }

    } else if (direction == "Down") {

        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            if ((board.checkTile(shipPart + y, x) != EMPTY_TILE) or (ship.mLength - 1 + y > NUM_ROWS)) {
                cout << "Cannot place " << ship.mName << endl;
                return;
            }
        }
        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            board.updateTile(shipPart + y, x, ship.mSymbol);
        }

    } else if (direction == "Up") { 

        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            if ((board.checkTile(y - shipPart, x) != EMPTY_TILE) or (y - ship.mLength + 1 < 0)) {
                cout << "Cannot place " << ship.mName << endl;
                return;
            }
        }
        for (int shipPart = 0; shipPart < ship.mLength; shipPart++) {
            board.updateTile(y - shipPart, x, ship.mSymbol);
        }

    }
}
