/**
 * @file image.cpp
 * @author Ian Codding II
 * @brief Define how each of the definitions will work
 * @version 0.1
 * @date 2025-04-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "image.hpp"

/**
 * @brief Create a function welcomeScreen() that displays an
 *         initial program welcome message along with the rules of Battleship.
 *
 * @param array this is the menue givin
 * @param size how many lines of the array
 * @param maxOption this is for the check for wrong options
 * @param option the users option is returned to where this is called
 */
void displayMenu(const string array[], int size, int maxOption, int &option)
{
    system("clear");
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    do
    {
        cout << "\nEnter a menu option: ";
        cin >> option;
        if (cin.fail() || option < 0 || option > maxOption)
        {
            cout << "\nInvalid Option!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            option = -1;
        }
    } while (cin.fail() || option < 0 || option > maxOption);
}

/**
 * @brief Construct a new Shape:: Shape object
 *
 */
Shape::Shape()
{
    // Initialize shape buffer to spaces
    for (int i = 0; i <= diameter; ++i)
    {
        for (int j = 0; j <= diameter; ++j)
        {
            shape[i][j] = ' ';
        }
    }
}

/**
 * @brief Construct a new Shape:: Shape object
 *
 * @param i and makes the color depending on this index
 */
Shape::Shape(int i)
{
    // Make sure index is in bounds
    if (i >= 0 && i < 4)
    {
        cout << colors[i];
    }
    else
    {
        cout << "\033[0m"; // Default color
    }

    // Initialize shape buffer to spaces
    for (int k = 0; k <= diameter; k++)
    {
        for (int j = 0; j <= diameter; j++)
        {
            shape[k][j] = ' ';
        }
    }
}

/**
 * @brief This will draw a circle and put it in the buffer
 *
 * @param buffer used for smooth movments
 * @param x
 * @param y
 */
void Shape::drawCircle(ostringstream &buffer, int x, int y)
{
    for (int row = 0; row <= diameter; row++)
    {
        // Iterate over each column of the circle
        for (int column = 0; column <= diameter; column++)
        {
            // Calculate the distance from the center of the circle
            int dx = column - diameter / 2;
            int dy = row - diameter / 2;
            double distance = sqrt(dx * dx + dy * dy);
            // Check if the distance is within the radius

            if (distance <= diameter / 2)
            {
                // cout << '*';
                // cout << ' ';
                *(*(shape + row) + column) = circleMakings;
            }
            else
            {
                // cout << "  ";
            }
        }
        // cout << endl;
    }
    for (int i = 0; i <= diameter; i++)
    {
        for (int j = 0; j <= diameter; j++)
        {
            if (j > diameter)
            {
                break;
            }
            buffer << "\033[" << (y + i + 1) << ";" << (x + j * 2 + 1) << "H" << *(*(shape + i) + j);
        }
        buffer << endl;
    }

    cout << buffer.str();
}

/**
 * @brief This will draw a triangle and put it in the buffer
 *
 * @param buffer
 * @param x
 * @param y
 */
void Shape::drawTriangle(ostringstream &buffer, int x, int y)
{
    for (int i = 0; i < diameter; i++)
    {
        for (int j = 0; j < diameter; j++)
        {
            if (i < diameter / 2)
            {
                if (j < diameter / 2)
                {
                    if (diameter / 2 - (j + 1 + i) <= 0)
                    {
                        *(*(shape + i) + j) = circleMakings;
                    }
                }
                else
                {
                    if (j + (diameter / 2 - i) <= diameter)
                    {
                        *(*(shape + i) + j) = circleMakings;
                    }
                }
            }
            else
            {
                if (j < diameter / 2)
                {
                    if (diameter / 2 - (j + (diameter - i)) <= 0)
                    {
                        *(*(shape + i) + j) = circleMakings;
                    }
                }
                else
                {
                    if (j + (diameter / 2 + 1 - (diameter - i)) <= diameter)
                    {
                        *(*(shape + i) + j) = circleMakings;
                    }
                }
            }
        }
    }
    for (int i = 0; i <= diameter; i++)
    {
        for (int j = 0; j <= diameter; j++)
        {
            if (j > diameter)
            {
                break;
            }
            buffer << "\033[" << (y + i + 1) << ";" << (x + j * 2 + 1) << "H" << *(*(shape + i) + j);
        }
        buffer << endl;
    }

    cout << buffer.str();
}

/**
 * @brief Function to configure terminal to non-canonical mode
 *
 */
void Terminal::setTerminalMode()
{ // to be honest, this was the result of too many hours of looking things up
    // only to find that there was a header for it
    struct termios new_settings;
    tcgetattr(STDIN_FILENO, &new_settings);          // Get current terminal settings
    new_settings.c_lflag &= ~ICANON;                 // Disable canonical mode
    new_settings.c_lflag &= ~ECHO;                   // Disable echo
    new_settings.c_cc[VMIN] = 1;                     // Minimum number of characters to read
    new_settings.c_cc[VTIME] = 0;                    // Timeout
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings); // Apply settings
}

/**
 * @brief Function to reset terminal to original settings
 *
 */
void Terminal::resetTerminalMode()
{
    struct termios original_settings;
    tcgetattr(STDIN_FILENO, &original_settings);
    original_settings.c_lflag |= ICANON; // Enable canonical mode
    original_settings.c_lflag |= ECHO;   // Enable echo
    tcsetattr(STDIN_FILENO, TCSANOW, &original_settings);
}

/**
 * @brief Function to get a single character input without waiting for Enter
 *
 * @return char
 */
char Terminal::getKeyPress()
{
    char ch;
    read(STDIN_FILENO, &ch, 1); // Read a single character
    return ch;
}