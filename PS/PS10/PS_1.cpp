#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

class Circle
{
private:
    double radius;

public:
    Circle();
    // constructs a new circle with the given radius as a real number
    Circle(double r)
    {
        radius = r;
    }

    // returns the area occupied by the circle
    double area()
    {
        return PI * pow(radius, 2);
    }

    // returns the distance around the circle
    double circumference()
    {
        return 2*radius*PI;
    }

    // returns the radius as a real number
    double getRadius() const
    {
        return radius;
    }

    // returns a string representation such as "Circle{radius=2.5}"
    string toString() const
    {
        return "Circle{radius=" + to_string(radius) + "}";
    }
};

int main()
{
    
}