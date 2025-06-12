/**
 * @file lab6_4.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <fstream>
using namespace std;

// INCLUDE FUNCTION PROTOTYPES HERE
void displayMenu();
double findSquareArea(double length);
double findCircleArea(double radius);
double findTriangleArea(double base, double height);


const double PI = 3.14159;

int main()
{
    double area = 0;
    //CREATE A FILE OUTPUT STREAM OBGECT
    ofstream outputFile;
    //OPEN FILE areas.txt
    outputFile.open("areas.txt");


    cout << "The program will calculate the area of "
            <<"the square and write it to the file\n";
    // Prompt user to enter a choice from the menu
    double len = 0.0;
    cout << "Enter length: ";
    cin >> len;
    area = findSquareArea(len);
    cout << "Area of the square = " << area << endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    outputFile << "Area of the square = " << area << endl;

    cout << "The program will calculate the area of "
            << "the circle and write it to the file\n";
    // Prompt user for radius of circle
    double rad = 0.0;
    cout << "Enter radius: ";
    cin >> rad;
    area = findCircleArea(rad);
    cout << "Area of the circle = " << area <<endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    outputFile << "Area of the circle = " << area << endl;

    cout << "The program will calculate the area of "
            <<"the triangle and write it to the file\n";
    // Prompt user for base and height of the right triangle
    double base = 0.0, height = 0.0;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;

    area = findTriangleArea(base, height);
    cout << "Area of the triangle = " << area << endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    outputFile << "Area of the triangle = " << area << endl;


    //CLOSE THE FILE
    outputFile.close();

    return 0;
}

double findSquareArea(double len) // This will take in the input of len and calculate the area.
{
    double area = 0.0;

    // Compute for area of square
    area = len * len;

    return area;
}

double findCircleArea(double rad) // This will take in the input of rad and calculate the area.
{
    double area = 0.0;
     // Compute for area of circle
     area = PI * rad * rad;
     
     return area;
}

double findTriangleArea(double base, double height) // This will take in the input of base and height to calculate the area.
{
    double area = 0.0;
     // Compute area of right triangle
     area = 0.5 * base * height;
     
     return area;
}