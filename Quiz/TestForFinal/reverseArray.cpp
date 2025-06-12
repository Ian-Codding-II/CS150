#include <iostream>
using namespace std;

void reverseArray(int arr[], int size);
int main()
{
    int arr[] ={-1, -2, -4, -2};
    int size = sizeof(arr) /sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void reverseArray(int arr[], int size){
  
    for(int i =0; i <= size/2; i++)
    {
        int temp = arr[i];
        int next = arr[size-i-1];
        arr[i] = next;
        arr[size-i-1] = temp;
    }
}