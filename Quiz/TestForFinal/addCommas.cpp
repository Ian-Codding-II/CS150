#include <iostream>
#include <string>
using namespace std;

string addCommas(const string num);

int main()
{
    return 0;
}

string addCommas(const string num) {
    string result;
    int count = 0;

    for (int i = num.length() - 1; i >= 0; i--) {
        result = num[i] + result;
        count++;
        if (count % 3 == 0 && i != 0) {
            result = ',' + result;
        }
    }

    return result;
}