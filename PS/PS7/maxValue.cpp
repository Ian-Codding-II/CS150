#include <iostream>
using namespace std;

int maxValue(int arr[], int len);

int main()
{
    int arr[] = {17, 7, -1, 26, 3, 9};
    cout << "Return is: " << maxValue(arr, 6) << "\n";
}

int maxValue(int arr[], int len)
{
    int max = -1000;
    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}