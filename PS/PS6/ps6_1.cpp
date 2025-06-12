#include <iostream>
using namespace std;

int main()
{
    int first = 0;
    int last = 0;
    cout << "Start? ";
    cin >> first;
    cout << "End? ";
    cin >> last;
    

    if (first < last)
    {
        for(first; first <= last; first++)
        {
            cout << first;
            if (first != last)
            {
                cout << ", ";
            }
        }
    }
    else
    {
        for(first; last <= first; first--)
        {
            cout << first;
            if (first != last)
            {
                cout << ", ";
            }
        }
    }

    cout << "\n";

    return 0;
}