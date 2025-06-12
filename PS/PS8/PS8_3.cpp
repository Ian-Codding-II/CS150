#include <iostream>
using namespace std;

int secondIndexOf (int a[], int length, int target);

int main()
{
    int a[] = {42, 7, -9, 14, 8, 39, 42, 8, 19, 0, 42},
        length = 11,
        target = 42;

    cout << secondIndexOf (a, length, target) << "\n";
}

int secondIndexOf (int a[], int length, int target)
{
    int second = -1;
    int tell = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] == target)
        {
            tell += 1;
        }
        if (tell == 2)
        {
            second = i;
            break;
        }
    }
    return second;
}