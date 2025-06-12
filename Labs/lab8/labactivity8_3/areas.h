/**
 * @file areas.h
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-03-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef AREAS_H
#define AREAS_H

#include <iostream>
using namespace std;

const double PI = 3.14159;

int getChoice(int min, int max);
void displayMenu();
double findSquareArea(double length);
double findCircleArea(double radius);
double findTriangleArea(double base, double height);

#endif