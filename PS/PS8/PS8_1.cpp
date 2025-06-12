#include <iostream>
using namespace std;


void collapsePairs(int a[], int length);

int main()
{
    const int length = 10;
    int a[] = {7, 2, 8, 9, 4, 22, 7, 1, 9, 10};

    collapsePairs(a, length);

    return 0;
}

void collapsePairs(int a[], int length)
{
    for (int i = 0; i < length; i+=2)
    {
        if ((i + 1) == length)
        {
            break;
        }
        if ((a[i] + a[i + 1]) % 2 == 0)
        {
            a[i] = (a[i] + a[i + 1]);
            a[i + 1] = 0;
        }
        else
        {
            a[i + 1] = (a[i] + a[i + 1]);
            a[i] = 0;
        }
    }
    for (int i = 0; i < length; i++)
        {
            cout << a[i] << ", ";
        }
        cout << "\n";
}