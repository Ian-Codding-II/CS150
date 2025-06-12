#include <iostream>
#include <vector>
using namespace std;

void displayTopFive(int arr[], int size, vector<int> top);

int main()
{
    int arr[] ={7,-2, 4, 6, 9, 11, -5, 12, 9, 2, 3};
    int size = sizeof(arr) /sizeof(arr[0]);
    vector<int> top;
    displayTopFive(arr, size, top);
}

void displayTopFive(int arr[], int size, vector<int> top)
{
    vector<int> blackList;
    for (int j = 0; j < size; j++)
    {
        blackList.push_back(arr[j]);
    }
    for(int k = 0; k < 5; k++) {
        int j = -10000;
        int check;
        for(int i = 0; i < size; i++) {
            if (blackList[i] > j){
                j = blackList[i];
                check = i;
            }    
        }
        blackList[check] = -10000000;

        if(j > -10000) top.push_back(j);
    }

    int sizeVector = sizeof(top) /sizeof(top[0]);

    for(int i = 0; i < sizeVector-1; i++) {
        cout << top[i] << " ";
    }
    cout << endl;
}