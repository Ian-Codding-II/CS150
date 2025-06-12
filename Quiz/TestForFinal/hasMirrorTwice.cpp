#include <iostream>
using namespace std;

bool hasMirrorTwice(int arr1[], int size1, int arr2[], int size2);

int main()
{


    return 0;
}

bool hasMirrorTwice(int arr1[], int size1, int arr2[], int size2){
    // search the first array 
    // and look for the sequence of elements in the second
    int mirrorCount = 0;

    // Loop through a1, checking slices of size len2
    for (int i = 0; i <= size1 - size2; i++) {
        bool match = true;

        // Check if a1[i..i+len2-1] matches reversed a2
        for (int j = 0; j < size2; j++) {
            if (arr1[i + j] != arr2[size2 - 1 - j]) {
                match = false;
                break;
            }
        }

        if (match) {
            mirrorCount++;
            if (mirrorCount >= 2) {
                return true;
            }
        }
    }

    return false;
}