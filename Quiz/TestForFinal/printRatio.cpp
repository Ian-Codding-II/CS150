#include <iostream>
#include <iomanip>
using namespace std;

void printRatio(int arr[], int size);

int main()
{
    int arr[] ={7,-2, 4, 6, 9, 11, -5, 12, 9, 2, 3};
    int size = sizeof(arr) /sizeof(arr[0]);
    printRatio(arr, size);

}

void printRatio(int arr[], int size){
  double neg = 0;
  double pos = 0;
  double zero=0;
    for(int i =0; i < size; i++)
    {
        if(arr[i] == 0) {
            zero++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            pos++;
        }
    }
    cout << fixed << setprecision(2) << pos/size*100 << "% of positive numbers\n";
    cout << fixed << setprecision(2) << neg/size*100 << "% of negative numbers\n";
    cout << fixed << setprecision(2) << zero/size *100<< "% of zeros numbers\n";

}