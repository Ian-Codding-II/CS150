#include <iostream>
using namespace std;

const double pi = 3.14159;

int main()
{
    double radius = 0.0;
    double hight = 0.0;
    cout << " Enter the hight of the cone as an integer ";
    cin >> hight;

    cout << " Enter the radius of the base of the cone as an integer ";
    cin >> radius;

    double volume = (1.0/3.0)* pi * radius * hight;

    cout << " the volume of the cone with a radius of "
    << radius 
    <<" and hight of "
    << hight 
    <<" is "
    << volume
    << endl;
    cout << " Thank you for your time!"
    << endl;
    cout <<"Size of int:"<< sizeof (int) << endl;
    cout <<"Size of short:"<< sizeof (short) << endl;
    cout <<"Size of float:"<< sizeof (float) << endl;
    cout <<"Size of double:"<< sizeof (double) << endl;

    return 0;
}
