#include <iostream>
#include <iomanip>
using namespace std;

double getPercentEven(int a[], int length);

int main()
{
    int a[] = {6, 4, 9, 11, 5},
        length = 5;

    cout << getPercentEven(a, length) << "\n";
}

double getPercentEven(int a[], int length)
{
    double even = 0.0;

    for (int i = 0; i < length; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
    }
    if (length > 0)
    {
        even = (even / length) * 100.0;
    }
    cout << fixed << setprecision(1);
    return even;
}