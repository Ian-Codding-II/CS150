#include <iostream>
using namespace std;

int main()
{
    double s0 = 12.0;
    double v0 = 3.5;
    double a0 = 9.8;
    double t = 10;

    double s = s0 + v0*t + (.5*a0*t*t);
    cout << s;

    return 0;
}