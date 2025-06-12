#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    double num2 = 0;
    int sum = 0;
    int defference = 0;
    int product = 0;
    double quotient = 0;

    cout << "This program will demonstrate arithmetic operations." << endl;
    cout << "Enter an integer";
    cin >> num1;

    cout << "Enter another integer.";
    cin >> num2;

    sum = num1 + num2;
    defference = num1 - num2;
    quotient = num1/num2;
    product = num1*num2;

    cout << "sum = " << sum << " and ";
    cout << "difference = " << defference << " and ";
    cout << "product = " << product << " and ";
    cout << "quotient = " << quotient << " Thank you.\n";
    
    return 0;
}