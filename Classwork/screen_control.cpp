/**
 * @file screen_control.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <unistd.h> //need for sleep
using namespace std;

const int TIME = 100000; //microsecond for usleep() function
void SetCursor(int x,int y);
void setColor(int color);

int main()
{
    int x = 10, 
        y = 10;

    setColor(57);

    SetCursor(x, y);
    cout << "Hello" << endl;

    for (int i = x; i < 115; i++)
    {
        system("clear");    //clear the screen 

        SetCursor(i, y);
        cout << "Hello" << endl;
        usleep(TIME);
    }

    for (int i = 115; i > x; i--)
    {
        system("clear");    //clear the screen 

        SetCursor(i, y);
        cout << "Hello" << endl;
        usleep(TIME);
    }
        return 0;

}

void SetCursor(int x,int y)    
{
    //printf("%c[%d;%df",0x1B,y,x);
    //printf("\033[%d;%dH",y,x);
   cout << "\033["<<y<<";"<<x<<"H";
}

void setColor(int color)
{
    cout << "\033[38;5;"<<color<<"m";
}