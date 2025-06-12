#include <iostream>
using namespace std;

bool sorted (double a[], int length);

int main()
{
    int length = 6;
    double a[] = {1.5, 4.3, 7.0, 19.5, 25.1, 46.2};

    cout << sorted (a, length);
}

bool sorted (double a[], int length)
{
    bool sort = true;

    for (int i = 0; i < length; i++)
    {
        if (i + 1 == length)
        {
            break;
        }
        if (a[i] > a[i + 1])
        {
            sort = false;
        }
    }

    return sort;
}