#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //creating a file output stream object 
    ofstream outputFile;

    // Open the output file
    outputFile.open("Friends.txt");

    // Use a loop to get the names of three friends
    // and write each name in the output file
    cout << "Enter the names of three friends.\n";

    for (int count = 1; count <= 3; ++count)
    {
        string name;
        cout << "Friend #" << count << ": ";
        cin >> name;
        outputFile << name << endl;
    }

    outputFile.close();     // Close the file

    cout << "The names were saved to a file.\n";
    cin.ignore();           //clear the \n from the buffer

    cout << "\nPress ENTER to continue\n";
    cin.ignore();           //read the \n

    
    //creating a file input stream objec
    ifstream inputFile;

    // Open the input file
    inputFile.open("Friends.txt");

    cout << "Here are the names stored in the Friends.txt file.\n";

    for (int count = 1; count <= 3; ++count)
    {
        string name;
        inputFile >> name;      // Read the next name from the file
        cout << name << endl;   // and display it
    }

    inputFile.close();


    return 0;
}