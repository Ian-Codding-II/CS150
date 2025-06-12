#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int numB = 0;
    int big = INT16_MIN;
    int small = INT16_MAX;
    cout << "Number of numbers? ";
    cin >> num;

    for (int numA=0; num > numA; numA++)
    {
        
        cout << "Number " << 1+numA << ": ";
        cin  >> numB;
        
        if (big <= numB)
        {
            big = numB;
        }

        if (small >= numB)
        {
            small = numB;
        }

    }
    cout << "Biggest = " << big << "\n";
    cout << "Smallest = " << small << "\n";

    return 0;
}