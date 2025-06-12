/**
 * @file lab4_2.cpp
 * @author Ian Codding II
 * @brief Math Tutor
 * @version 0.1
 * @date 2025-02-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <cstdlib> //rand()
#include <ctime> //time(NULL)
#include <iomanip> //setw()
 
using namespace std;
 
//function prototypes
void displayMenue();
void operation(int n1, int n2, char op);
 
 
int main()
{
    displayMenue();
    int choice = 0;
    int num1 = 0;
    int num2 = 0;
    cin >> choice;
 
    //GENERATE RANDOM SEED
    srand(time(0));
    //GENERATE TWO RANDOM NUMBERS AND SAVE IT IN num1 AND num2
    num1 = (rand() % 91) + 10;
    num2 = (rand() % 91) + 10;
 
    //USE SWITCH STATEMENT BASED ON USER CHOICE
     switch(choice)
    {
        case 1:
            operation(num1, num2, '+');
            break;
        case 2:
            operation(num1, num2, '-');
            break;
        case 3:
            operation(num1, num2, '*');
            break;
        default :
            cout << "You entered invalid input." << endl;
    }
 
    //SWITCH STATEMENT MUST HAVE DEFAULT OPTION
    return 0;
}
 
 // IMPLEMENT FUNCTIONS HERE
void displayMenue()
{
    cout << "Choose what type of problems you would like to work on: " << endl;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "Enter menu choice (1,2, or 3): ";
}

void operation(int n1, int n2, char op)
{
    int answer = n1 + n2;
    int userAnswer = 0;
    int width = 0;

    switch(op)
    {
        case '+':
        {
            cout << setw(6) << n1 << endl;
            cout << setw(4) <<  " + " << n2 << endl;
            answer = n1 + n2;
            break;
        }
        case '-':
        {
            cout << setw(6) << n1 << endl;
            cout << setw(4) <<  " - " << n2 << endl;
            answer = n1 - n2;
            break;
        }
        case '*':
        {
            cout << setw(6) << n1 << endl;
            cout << setw(4) <<  " * " << n2 << endl;
            answer = n1 * n2;
            break;
        }

    }
     
    cout << setw(6) << "___" << endl;
    

    if(answer >= 100)
    {
        width = 3;
    }
    else if(answer <10 && answer >0)
    {
        width = 5;
    }
    else 
    {
        width = 4;
    }
    cout << setw(width) << "   ";
    cin >> userAnswer;

    if(userAnswer == answer)
    {
        cout << " Good job!" << endl;
    }
    else
    {
        cout << "Sorry, the answer is " 
            << answer << endl;
    }
}
 
