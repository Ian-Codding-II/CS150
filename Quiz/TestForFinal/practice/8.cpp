//8.cpp.
//Classes
#include <iostream>
#include <vector>
using namespace std;
/**
a.	(10 pts) Define a class called Movie which has 3 private member
variables title, director, and year. You will need to write getter and setter
functions for all your member variables. The Movie class definition will also
include a default constructor and a destructor.
*/

class Movie
{
public:
    Movie(){
        mtitle = "";
        mdirector ="";
        myear=0;
    }
    ~Movie(){};
    string gettitle()const{
        return mtitle;
    }
    string getdirector()const{
        return mdirector;
    }
    int getyear()const{
        return myear;
    }
    void settitle(string t){
        mtitle = t;
    }
    void setdirector(string d){
        mdirector = d;
    }
    void setyear(int y){
        myear = y;
    }

private:
    string mtitle;
    string mdirector;
    int myear;
};








/**
b.	(5 pts) In the main() function, declare a vector of Movie objects
with a size of 10. On the sixth subscript/index of the vector,
assign the values "Harry Potter and the Goblet of Fire" as the title,
"Mike Newell" as director, and 2005 for the year.
Display the sixth element of vector.*/

int main()
{
    vector<Movie> arr(10);
    arr[6].setdirector("Mike Newell");
    arr[6].settitle("Harry Potter and the Goblet of Fire");
    arr[6].setyear(2005);
    cout << arr[6].getdirector() << " "
    << arr[6].gettitle() << " "
    << arr[6].getyear();
    cout << endl;
}
