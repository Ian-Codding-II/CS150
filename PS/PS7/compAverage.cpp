#include <iostream>
using namespace std;

double computeAverage(int arr[], int len);

int main()
{
    int len = 10;
    cout << "Enter length: ";
    cin >> len;
    int arr[] = {1, -2, 4, -4, 9, -6, 16, -8, 25, -10};
    cout << "\nThe average of that array is: ";
    cout << computeAverage(arr, len) << "\n";

    return 0;
}
double computeAverage(int arr[], int len)
{
    double mean;
    int i;
    for (i = 0; i < len; i++)
    {
        mean += arr[i];
    }
    mean /= i;

    return mean;
}