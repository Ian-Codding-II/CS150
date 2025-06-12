#include <iostream>
#include <string>
#include "car.hpp"

using namespace std;

int main()
{
    Car c1;
    c1.setYear(1965);
    c1.setMake("Camaro");
    c1.setSpeed(120);

    cout << "Current Speed: " << c1.getSpeed() << endl;

    c1.accelerate();

    cout << "Current Speed: " << c1.getSpeed() << endl;

    return 0;
}