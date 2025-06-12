#include <iostream>
using namespace std;

int findLargest(double arr[]);

int main()
{
    double arr[] ={-1, -2.3, -4.2, -2};

    int a = findLargest(arr);
    cout << arr[a] << endl;
}

int findLargest(double arr[])
{
    int g;
    double j = -1000000;

    for(int i =0; i < 4; i++)
    {
        if (arr[i] > j){
            j = arr[i];
            g = i;
        }
    }
    return g;
}