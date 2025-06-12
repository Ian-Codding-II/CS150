/**
 * @file animations.hpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief this is where we initualize some fun stuff
 * @version 0.1
 * @date 2025-04-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef animations_HPP
#define animations_HPP

// #include <SFML/Audio.hpp>
#include <iostream>
#include <unistd.h> // for usleep
#include <sstream>
#include <vector>

using namespace std;

/**
 * @struct Animation
 * @brief Provides methods to simulate ship movement and explosions in a terminal animation.
 */
struct Animation {
    void shipMoving(bool hit);
    void Hit(bool hit);
    void setCursor(int x, int y); // Moves cursor to (x, y)
    void drawShip(ostringstream& buffer, int x, int y); // Draws ship at position (x, y)
    void drawBigShip(); // Draws a larger ship at (x, y)
    void explosion(); // Simulates an explosion at (x, y)
};

#endif