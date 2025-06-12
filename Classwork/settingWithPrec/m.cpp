#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1 = 34.789;
    double num2 = 7.0;
    double num3 = 67;

    cout << fixed << setprecision(2);
    cout << setw(9) << num1 << endl;

    cout << fixed << setprecision(3);
    cout <<setw(5) << num2 << endl;
    
    cout << left;
    cout << setw(7) << num3 << num3 << endl;

    return 0;
}