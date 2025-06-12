/**
 * @file battleship.hpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief This is where we git chaos
 * @version 0.1
 * @date 2025-04-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include "Ship.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <limits>
#include <iomanip>
#include <ctime>
#include <unistd.h>
#include <vector>
#include <sstream>

using namespace std;

// Global variables and arrays useful in the program
const int NUM_ROWS = 10;  // number of rows of the battleship game board
const int NUM_COLS = 10;  // number of columns of the battleship game board

const char EMPTY_TILE = '-'; // Empty tile on board
const char HIT_TILE = '*';
const char MISS_TILE = 'm';

// Ship objects
const Ship Carrier('C', "Carrier", 5);
const Ship Battleship('B', "Battleship", 4);
const Ship Cruiser('R', "Cruiser", 3);
const Ship Submarine('S', "Submarine", 3);
const Ship Destroyer('D', "Destroyer", 2);

// Ship array
const Ship SHIPS[] = {Carrier, Battleship, Cruiser, Submarine, Destroyer};
const int NUM_SHIPS = (sizeof(SHIPS)/sizeof(SHIPS[0]));  // number of ships in the battelship game

const string MENU[] = {" ~   ~                 ", // Menu as const in header file doesnt work?
    "  \\\\  \\\\  []=   []=    ",
    "\\ B A T T L E S H I P /",
    "",
    "[1] Play Computer",
    "[2] Play Friend",
    "[3] Rules",
    "[0] Quit"};
    
const string placeShipOption[] = {"Please select from the following menu:",
    "[1] Enter positions of ships manually.",
    "[2] Allow the program to randomly select positions of ships.",
    "[0] Return to Menu"};
    
const string RULES[] = {"--RULES--\n",
    "1. This is a two player game.\n",
    "2. Player1 is you and Player2 is the computer.\n",
    "3. Turns:",
    "   The game alternates turns between you and the computer.",
    "   On your turn, you will call out a coordinate (like ""A 5"" or ""H 3"")"
    "\n   to try and hit one of the computer’s ships.",
    "   On the computer's turn, it will also choose a coordinate and attempt to hit one of your ships.\n",
    "4. Hit or Miss:",
    "   If you hit the computer’s ship, it will mark the spot with ""*"".",
    "   If the guess misses, it will be marked with a ""m"".",
    "   The computer will also track your hits and misses on its own grid.\n",
    "5. Sinking Ships:",
    "   When you hit all segments of one of the computer’s ships,"
    "\n   it is considered ""sunk,"" and the computer will typically notify you of the sinking.",
    "   Likewise, if the computer sinks one of your ships, it will let you know.\n",
    "6. End of the Game:",
    "   The game ends when one player (you or the computer) has sunk all of the opponent’s ships.",
    "   The player who sinks all the opponent's ships first is the winner.\n",
    "[0] Return to Menu"};

#endif