#include <iostream>
#include <string>
using namespace std;

int main()
{
    string test[5];

    while (test[0] != "END!")
    {
        getline(cin, test[0]);
        cout << test[0] << "\n";
    }

    for (int i = 0; i <= 4; i++)
    {
        cin >> test[i];
        cout << test[i];
    }

    return 0;
}