#include <iostream>
#include <iomanip>
using namespace std;

int absoluteDifference( int size, int* arr);

int main()
{
    int arr[3][3] ={7,-2, 4, 6, 9, 11, -5, 12, 9};
    int size = sizeof(arr) /sizeof(arr[0]);

    int s = absoluteDifference(size, (int *)arr);
    cout << s << "\n";

}

int absoluteDifference( int size, int *arr){

  int sums =0;
  int revSum=0;
    for(int j = 0; j < size; j++) {
        sums += *((arr + j*size) + j);
        revSum += *((arr + j*size) + (size -1-j));
    }

    int diff = sums-revSum;
    if (diff < 0 ) (diff = diff * -1);
    return diff;
}