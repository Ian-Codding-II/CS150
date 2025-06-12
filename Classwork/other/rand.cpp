#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int num1 = 0;
    srand(time(0));
    
    cout << num1 << endl;
    num1 = rand();

    int diceRoll = num1 % 6;
    diceRoll += 1;

    cout << "Dice Roll: " << diceRoll << endl;

    return 0;
}