/**
 * @file   <problem2.cpp>
 * @author <Ian Codding II>
 * @brief  <This is a converter of inches>
 * @date   <1/30/2025>
 *
 */

#include <iostream>
using namespace std;

int main()
{
    //I want them to tell me how many inches they have
    int inches = 0.0;
    cout <<"Please inter the hight in inches :)";
    cin >> inches;

    //I want to format them
    cout << "Thank you\n";
    int ft = inches/12;
    int in = inches - ft*12;

    //And finally, I want to diplay it to them in the new format
    cout <<"The hight in feet/inches format is "
        << ft <<"'"<< in <<"\" "<< endl;

    return 0;
}