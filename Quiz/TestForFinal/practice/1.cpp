//1.cpp(5 pts)
#include <iostream>
using namespace std;

const int SIZE = 20;
//function prototype
int findLargest(double arr[], int size);
int main()
{
    double numbers[SIZE] ={3.4, 5.7, 9.0, -3.2, 1.7, 3.56, 11.03, -3.78, 4.8, 0.0,
                            1.5, 6.09, -2.34, 10.03, 9.8, 2.45, 3.76, 8.9, -1.2, 4.8};
    //call findLargest and display the return
   cout << findLargest(numbers, SIZE);
    return 0;
}
/********************************************************************
*Write a function called findLargest() that accepts an array of doubles
*and the number of items in the array as parameters,
*and returns the index of the largest item.
*********************************************************************/
int findLargest(double arr[], int size) {
    double larg = -10000.0;
    int index = 0;
   for (int i = 0; i < size; i++) {
    if (arr[i] > larg){
        larg = arr[i];
        index = i;
    }
   }
   
   
   
    return index;
}
