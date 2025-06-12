#include <iostream>
using namespace std;



int main()
{

    char input;
    cout << "Input a single letter grade (a character): ";
    cin >> input; cout << endl;

    switch(input)
    {
        case 'A':
            cout << "4\n";
            break;
        case 'B':
            cout << "3\n";
            break;
        case 'C':
            cout << "2\n";
            break;
        case 'D':
            cout << "1\n";
            break;
        case 'F':
            cout << "0\n";
            break;
        default:
            cout << "Sorry, that is not a grade.\n";
            break;
    }

    /*int score = 0;
    cin >> score;
    if (89 < score)
    {
        cout << "A\n";
    }
    else if (79 < score)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }*/

    return 0;
}