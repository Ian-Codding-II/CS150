#include <iostream>
using namespace std;

int numUnique(int arr[], int len);

int main()
{  

    return 0;
}

int numUnique(const int arr[], int length) {
    if (length == 0) return 0;

    int count = 1;  // At least one unique value if array is non-empty

    for (int i = 1; i < length; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }

    return count;
}