#include <iostream>
using namespace std;


int main()
{
    int arr[3][4] ={12, 8, 1, 9, 34, 1, 0, 2, 7, 8, 89, 6};

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

