#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> first = {7,-2, 4, 6, 9, 11, -5, 12, 9, 2, 3};
    vector<int> top;
    int size = first.size();
    vector<int> blackList;

    for (int j = 0; j < size; j++)
    {
        blackList.push_back(first[j]);
    }

    for(int k = 0; k < size; k++) {
        int j = -10000;
        int check=-1;
        for(int i = 0; i < size; i++) {
            if (blackList[i] > j){
                j = blackList[i];
                check = i;
            }    
        }
        if (check != -1) {
            blackList[check] = -1000000;

            // Check if it's already in top
            bool isDuplicate = false;
            for (long unsigned i = 0; i < top.size(); i++) {
                if (top[i] == j) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                top.push_back(j);
            }
        }
    }

    for(int i = 0; i < size; i++) {
        cout << top[i] << " ";
    }
    cout << endl;

}

