#include <iostream>
#include <vector>
using namespace std;

int unique(int arr[], int size);

int main()
{
    int arr[] ={1, 2, 3, 4, 2, 4, 1};
    int size = sizeof(arr) /sizeof(arr[0]);

    cout << unique(arr, size) << endl;
}

int unique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
            return arr[i];
    }
    return -1; // No unique value found
}