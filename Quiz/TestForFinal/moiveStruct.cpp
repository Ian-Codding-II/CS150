#include <iostream>
using namespace std;

struct Movie
{
    string mTitle;
    string mDirector;
    int mYear;
};

int main()
{
    Movie arr[10];
    arr[4].mTitle = "Harry Potter and the Goblet of Fire";
    arr[4].mDirector = "Mike Newell";
    arr[4].mYear = 2005;
    cout << arr[4].mTitle << endl << arr[4].mDirector << endl << arr[4].mYear << endl;
}