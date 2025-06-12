#include <iostream>
using namespace std;

int findRange(int arr[], int size);

int main()
{


    return 0;
}

int findRange(int arr[], int size){
    int big = -10000;
    int small = 10000;

    for(int i = 0; i < size; i++){
        if(big < arr[i]){
            big = arr[i];
        }
        if(small>arr[i]){
            small = arr[i];
        }
    }
    return (big-small+1);
}