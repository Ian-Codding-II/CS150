#include <iostream>

using namespace std;
int main()
{
int length = 0;
double width = 0;

cout << "What is the length of the rectangle as integer? ";
cin >> length;

cout << "What is the width of the rectangle as integer? " ;
cin >> width;

cout << "length is " << length << " width is " << width << endl;
double area = length*width;
cout << "The area is " << area << endl;

return 0;
}