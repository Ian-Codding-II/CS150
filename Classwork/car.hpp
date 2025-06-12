#include <string>
using namespace std;



class Car
{
public:
    Car()
    {
        mYear = 2000;
        mMake = " ";
        mSpeed = 0;
    }

    int getYear()
    {
        return mYear;
    }
    string getMake()
    {
        return mMake;
    }
    int getSpeed()
    {
        return mSpeed;
    }

    void setYear(int year)
    {
        mYear = year;
    }
    void setMake(string make)
    {
        mMake = make;
    }
    void setSpeed(int speed)
    {
        mSpeed = speed;
    }

    void accelerate()
    {
        mSpeed += 5;
    }
    void brake()
    {
        mSpeed -= 5;
    }


private:
        int mYear, mSpeed;
        string mMake;

};