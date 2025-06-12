/**
 * @file void_function.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-02-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

void display_message();

int main()
{
    cout <<"Hello from main.\n";
    display_message();
    cout << "Now we are back in the main function again" << endl;
    return 0;

}
void display_message()
{
    cout << "Now we are in diplay_mesage.\n";
}
