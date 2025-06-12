#include <iostream>
#include <vector>
using namespace std;

int longestSortedSequence(int a[], int length);

int main()
{
    int a[] = {3, 8, 10, 1, 9, 14, -3, 0, 14, 207, 56, 98, 12};
    cout << longestSortedSequence(a, 13) << "\n";

    return 0;
}

int longestSortedSequence(int a[], int length)
{
    int counter = 0;
    int max = 0;
    if (length > 0)
    {
        counter++;
        max++;
    }
    for (int i = 0; i < length; i++)
    {
        if (length == i + 1)
        {
            break;
        }
        if (a[i] <= a[i + 1])
        {
            counter++;
        }
        else
        {
            counter = 1;
        }
        if (max <= counter)
        {
            max = counter;
        }
    }

    return max;
}