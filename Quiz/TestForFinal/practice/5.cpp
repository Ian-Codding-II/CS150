//5.cpp(10 pts)
/************************************************************
Define and initialize 2D array with the table of values below.
Identify what is the appropriate data type for the array based on
the values in the table. Then print out all the data in the array
where each row is separated by a newline and each element in the
row is separated by a space.
12	8	1	9
34	1	0	2
7	8	89	6
**************************************************************/
#include <iostream>
using namespace std;
int arr[][4] ={12,8, 1, 9, 34, 1, 0, 2, 7, 8, 89, 6};
int main(){
for(int i =0; i< 3; i++) {
    for (int j =0; j < 4; j++){
        cout << arr[i][j] << " ";
    }
    cout<< endl;
}
}