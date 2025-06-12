#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;

public:
    Date(){};
    Date(int m2, int d2)
    {
        month = m2;
        day = d2;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    bool operator==(const Date& other) {
        return (other.day == day && other.month == month);
    }
    ostream& operator<<(ostream& os) {
        os << month << '/' << day;
    }
    bool operator!=(const Date& other) {
        return (other.day != day && other.month != month);
    }
    

};

int main()
{


    return 0;
}