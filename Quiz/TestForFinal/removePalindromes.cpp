#include <iostream>
using namespace std;

void removePalindromes(string arr[], int len);

int main()
{


    return 0;
}

void removePalindromes(string arr[], int len){
    for(int k = 0; k < len; k++){
        int i = 0;
        int j = arr[k].length() - 1;
        bool check = true;

        while (i < j) {
            // // Skip spaces
            // while (i < j && arr[k][i] == ' ' || arr[k][i] == '!') i++;
            // while (i < j && arr[k][j] == ' ' || arr[k][j] == '!') j--;

            if (tolower(arr[k][i]) != tolower(arr[k][j])){
                check = false;
                break;
            }

            i++;
            j--;
        }
        if(check){
            arr[k] = "";
        }
    }
}