/**
 * @file image.hpp
 * @author Ian Codding II
 * @brief Initualize the setup for a circle that will move
 * @version 0.1
 * @date 2025-04-28
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <iostream>
#include <unistd.h> // for usleep
#include <sstream>  // for clean output to the buffer
#include <cmath>
#include <iomanip>
#include <limits>
#include <termios.h> // This will help me with in game actions... please dont press ctrl c

using namespace std;

const int diameter = 16;
const char circleMakings = '*';
const string MENU[3] = {
    "[1] Play with circle",
    "[2] Play with triangle",
    "[0] Quit"};
inline const char *colors[4] = {
    "\033[31m", // Red
    "\033[32m", // Green
    "\033[34m", // Blue
    "\033[33m"  // Yellow
};

void displayMenu(const string array[], int size, int maxOption, int &option);

// make a class that will initualize a circle and help it move around the screen
// all while changing collors every now and then
class Shape
{
public:
    Shape();      // defualt
    Shape(int i); // With color
    // have a function that initualizes what the circle will look like
    void drawCircle(ostringstream &buffer, int x, int y);
    void drawTriangle(ostringstream &buffer, int x, int y);

private:
    char shape[diameter + 1][diameter + 1];
};

struct Terminal
{
    void setTerminalMode();
    void resetTerminalMode();
    char getKeyPress();
};

#endif