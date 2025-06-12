/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief
 * @version 0.1
 * @date 2025-04-28
 *
 * @copyright Copyright (c) 2025
 *
 */

#include "image.hpp"

int main()
{
    Terminal Terminal;
    ostringstream buffer;

    int x = 40;
    int y = 10;

    void (Shape::*whatShape)(ostringstream &buffer, int x, int y); // my pointer to a function

    char key;

    int menuOption = 0;
    int MenuLength = (sizeof(MENU) / sizeof(MENU[0]));
    displayMenu(MENU, MenuLength, 3, menuOption);
    switch (menuOption)
    {
    case 1:
    {
        whatShape = &Shape::drawCircle; // if op 1 then point to circle
        break;
    }

    case 2:
    {
        whatShape = &Shape::drawTriangle; // if op 2 then point to triangle
        break;
    }
    default:
    {
        system("clear");
        return 0;
    }
    }

    Terminal.setTerminalMode(); // Set terminal to non-canonical mode

    cout << "\n\nUse arrow keys to change the coordinates. Press 'q' to quit.\n";

    while (true)
    {
        key = Terminal.getKeyPress(); // Get key press without waiting for Enter

        if (key == 27)
        {                                        // Arrow keys start with ESC (27)
            Terminal.getKeyPress();              // Skip the '[' character
            char arrow = Terminal.getKeyPress(); // Get the arrow key's direction

            // Determine direction based on the arrow key
            (arrow == 'A') ? y-- : // Up arrow increase
                (arrow == 'B') ? y++
                               : // Down arrow decrease
                (arrow == 'C') ? x++
                               : // Right arrow increase
                (arrow == 'D') ? x--
                               : 0; // if Left arrow decrease else do nothing
        }
        else if (key == 'q')
        {
            system("clear");

            break; // Quit on pressing 'q'
        }

        // Clear the current screen and print the updated value
        system("clear");
        // Empty it
        buffer.str(""); // Clear the contents
        buffer.clear(); // Reset any error flags (like eof)

        cout << "Use arrow keys to change the coordinates. Press 'q' to quit.\n";
        cout << "Coordinates: " << x << ", " << y << flush;
        cout << buffer.str();

        int colorIndex = (x >= 60 ? 0 : 2) + (y < 10 ? 1 : 0);
        Shape shapeObj(colorIndex);
        (shapeObj.*whatShape)(buffer, x, y);
    }
    Terminal.resetTerminalMode(); // Reset terminal to original settings

    return 0;
}

// In the main.cpp, create a 2D (any size between 5x5 and 12x12)
// array with the image you like
// Create an object of the class Image and initialize it using 2D array
// Move the object around the screen (pick your pattern).
// At least four different directions should be used
// Incorporate the color change in your program.
// The complexity of your program is up to you.

// At a minimum:

// Your class should have at least one private member
// variable and at least one public member function, and a constructor.
// The image should move on the screen at a reasonable speed for humans to see.
// At least four directions and four colors should be demonstrated.