#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int num=0;
    cout << "Type an integer: ";
    cin >> num;
    while (num > 0)
    {
        sum += num%10;
        num/=10;
    }
   
    cout << "Digit sum is " << sum << endl;
    

    return 0;
}