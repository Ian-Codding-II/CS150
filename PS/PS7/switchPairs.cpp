#include <iostream>
using namespace std;

void switchPairs(string arr[], int len);

int main()
{
    string arr[] = {"a", "bb", "c", "ddd", "ee", "f", "g"};
    switchPairs(arr, 7);
    return 0;
}

void switchPairs(string arr[], int len)
{
    for (int i = 0; i < len; i += 2)
    {
        if (i + 1 == len)
        {
            return;
        }
        string now = arr[i];
        string next = arr[i + 1];
        arr[i] = next;
        arr[i + 1] = now;
        cout << arr[i] << " " << arr[i+1] << "\n";
    }
    return;
}