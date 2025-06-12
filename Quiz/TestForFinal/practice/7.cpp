//7.cpp
// Structures
#include <iostream>
#include <string>
using namespace std;
/**
a.	(5 pts) Define a structure called Movie which has 3 member variables.
The member variables include title, director, and year.
The title and director are strings and the year is an integer.
*/
struct Movie
{
    string mtitle;
    string mdirector;
    int myear;
};



/**
b.	(5 pts) In the main() function, declare an array of type Movie
with a size of 10. On the fifth subscript/index of the array,
assign the values "Harry Potter and the Goblet of Fire" as the title,
"Mike Newell" as director and 2005 for the year.
Display the fifth element of array*/
int main()
{
    Movie arr[10];
    arr[5].mdirector="Mike Newell";
    arr[5].mtitle="Harry Potter and the Goblet of Fire";
    arr[5].myear=2005;
    cout << arr[5].mdirector << " "
    << arr[5].mtitle << " "
    << arr[5].myear;
    cout << endl;

    return 0;
}
