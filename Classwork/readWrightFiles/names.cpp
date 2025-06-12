/**
 * @file   readFile.cpp
 * @author WRITE STUDENT NAME
 * @brief  This program reads names from the file
 * @date   WRITE DATE TODAY
 *
 */
//INCLUDE CORRECT HEADER FILES
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Create a file object to read data
    ifstream inputFile;

    //open the file "names.txt"
    inputFile.open("names.txt");

    if(!inputFile)
    {
        cout << "Error opening file names.txt" << endl;
        exit(1);
    }

    string name;
    int totalNames = 0;
    //Create a loop that counts number of name in the file
    while(inputFile.peek() != EOF)
    {
        inputFile >> name;
        totalNames++;
    }

    cout << "The file contains " << totalNames << " names" << endl;

    inputFile.close();
    return 0;
}