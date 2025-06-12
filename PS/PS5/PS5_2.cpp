#include <iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0;
    do 
    {
    cout << "Type a number: ";
    cin >> num;
    sum = sum+num;
    }
    while (num!=-1);

    cout << "Sum is " << ++sum << "\n";

    return 0;
}