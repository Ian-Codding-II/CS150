#include <iostream>
using namespace std;

void printTriangle();

int main()
{
    printTriangle();

    return 0;
}

void printTriangle()
{
    for (int line=1; line <= 6; line++)
    {
        for (int num = 1; num <= line; num++)
        {    
            cout << "#";
        }
        cout << endl;
    }
}