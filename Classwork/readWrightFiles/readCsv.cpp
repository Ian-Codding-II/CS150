//INCLUDE CORRECT HEADER FILES
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;    
    //CREATE A FILE OBJECT TO READ THE FILE
    ifstream inputLinux;

    //OPEN THE DATALINAX.CSV 
    inputLinux.open("dataLinux.csv");
    if(!inputLinux)
    {
        cout << "Error opening dataLinux.csv";
        exit(1);
    }
    //READ FIRST LINE
    getline(inputLinux, line);
    
    cout << "The line is: " << line << endl;
    cout << "The length of the line is " << line.size() << endl;

    //CLOSE THE FILE
    inputLinux.close();
    //CREATE A FILE OBJECT TO READ THE FILE
    ifstream inputWindows;
    //OPEN THE DATAWINDOWS.CSV 
    inputWindows.open("dataWindows.csv");
    if(!inputWindows)
    {
        cout << "Error opening dataWindows.csv";
        exit(1);
    }
    //READ FIRST LINE
    getline(inputWindows, line);

    //string line;
    
    cout << "The line is: " <<line<<endl;
    cout <<"The length of the line is " <<line.size()<<endl;
    //CLOSE THE FILE
    inputWindows.close();
    return 0;
}