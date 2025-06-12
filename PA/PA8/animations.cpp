/**
 * @file animations.cpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief This is where we define the fun stuff
 * @version 0.1
 * @date 2025-04-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "animations.hpp"

/**
 * @brief this will simulate a ship moving
 * 
 */
void Animation::shipMoving(bool hit) {
    const int startX = 50;
    const int endX = hit ? 80 : 100;
    const int y = 20;

    for (int x = startX; x <= endX; x++) {
        ostringstream frameBuffer; // to make it less chopy
        
        frameBuffer << "\033[2J\033[H"; // Clear screen and move cursor to home
        drawShip(frameBuffer, x, y);           // Draw current frame

        cout << frameBuffer.str();     // Output entire frame at once
        usleep(60000);        // Delay
    }
}

/**
 * @brief shows a display of a ship shooting another
 * 
 */
void Animation::Hit(bool hit) {
    shipMoving(hit); // Draws ship at position (x, y)
    drawBigShip(); // Draws a larger ship at (x, y)
    explosion(); // Simulates an explosion at (x, y)
}

/**
 * @brief Move cursor to (x, y) in the terminal
 * 
 * @param x 
 * @param y 
 */
void Animation::setCursor(int x, int y) {
    cout << "\033[" << y << ";" << x << "H"; // ANSI escape sequence to move cursor
}

/**
 * @brief Draw the small ship at position (x, y)
 * 
 */
void Animation::drawShip(ostringstream& buffer, int x, int y) {
    vector<string> array = {"\033[1;34m   ~   ~\033[0m",
    "   \\\\  \\\\  []=   []=", 
    "  \\ B A T T L E S H I P /",
"\033[1;34m ~    ~    ~    ~    ~\033[0m"};
    for (unsigned i = 0; i < size(array); i++) {
        buffer << "\033[" << (y + i) << ";" << x << "H" << array[i] << "\n";
    }
}

/**
 * @brief Draw a larger version of the ship at position (x, y)
 * 
 */
void Animation::drawBigShip() {
    int x = 50, y = 35;
    ostringstream buffer;
    vector<string> array = {"\033[1;34m                      ~    ~    ~    ~    ~    ~\033[0m",
                    "                   __/___             __/___",
                    "          _____   /      \\           /      \\   _____",
                    "   ______|__|__|__\\______/__________/\\______/__|__|__|______",
                    "  /   B   A   T   T   L   E   S   H   I   P   \\___________/",
                    "\033[1;34m ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~\033[0m"};
    for (unsigned i = 0; i < size(array); i++) {
        buffer << "\033[" << (y + i) << ";" << x << "H" << array[i] << "\n";
    }
    cout << buffer.str();     // Output entire frame at once
}

/**
 * @brief Simulate an explosion at (x, y)
 * 
 */
void Animation::explosion() {
    int x = 79, y = 21;
    const char* frames[] = {
        "   *   ",
        "  ***  ",
        " * * * ",
        "  ***  ",
        "   *   "
    };

    const char* colors[] = { "\033[1;31m", "\033[1;33m" }; // Red & Yellow

    for (int i = 0; i < 5; ++i) {
        setCursor(x + 8, y); // Position explosion near ship
        cout << colors[i % 2] << frames[i] << "\033[0m" << flush;
        usleep(300000); // Wait 300 ms
        setCursor(x + 8, y); // Clear explosion frame
        cout << "      " << flush;
        usleep(60000); // Short pause before next frame
    }
}