/**
 * @file pa6.cpp
 * @author Ian Codding II
 * @brief this program takes info from a file and then displays info to the user
 * @version 0.1
 * @date 2025-03-06
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// I know these are long but trust the process
void display(double total, string monthMin, string monthMax,
             int dateMin, int dateMax, double minDay, double maxDay, int numYear);
void readFrom(ifstream &inputFile, double &total, string &monthMin, string &monthMax,
              int &dateMin, int &dateMax, double &minDay, double &maxDay, int &numYear);

double inputYear = 0.0; // makes things nice to have this global

/**
 * @brief this is where I test for good user input and call functions.
 *
 * @return int
 */
int main()
{
    char again = ' ';
    // Create a file object
    ifstream inputFile;
    string file = "data.csv";

    do
    {
        cout << "Enter the name of the file: ";
        cin >> file;
        //inputFile.open(file);

        if (file != "data.csv" || cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nError, try again. \n\n";
        }
    } while (file != "data.csv");

    do
    {

        double minDay = 1000, maxDay = -1000, total = 0;
        int numYear = 0, dateMin, dateMax;
        string monthMin, monthMax = " ";
        inputFile.open(file);

        cout << "Enter the year from 2000 to 2004: ";
        while (!(cin >> inputYear) || inputYear < 2000 || inputYear > 2004)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nError, try again. ";
        }
        // skip first row
        string line = "";
        getline(inputFile, line, '\n');

        readFrom(inputFile, total, monthMin, monthMax, dateMin,
                 dateMax, minDay, maxDay, numYear); // read from file
        display(total, monthMin, monthMax, dateMin,
                dateMax, minDay, maxDay, numYear);

        inputFile.close(); // close the file

        cout << "Would you like to check the other year (y/n): ";
        cin >> again;
        again == 'y' ? again = 1 : again = 0;
    } while (again);

    return 0;
}
/**
 * @brief
 *
 * @param inputFile will give me access to the file from main
 * @param total shares my total calculated to main
 * @param monthMin this will show the munth for the min amount of money
 * @param monthMax this will show the munth for the max amount of money
 * @param dateMin this will show the date for the min amount of money
 * @param dateMax this will show the date for the max amount of money
 * @param minDay this will hold the min amount of money
 * @param maxDay this will hold the max amount of money
 * @param numYear this will give me the number of one type of year
 */
void readFrom(ifstream &inputFile, double &total, string &monthMin, string &monthMax,
              int &dateMin, int &dateMax, double &minDay, double &maxDay, int &numYear)
{
    int year, day;
    double money;
    char delim;
    string month = " ";
    while (inputFile.peek() != EOF)
    {
        // read second line
        inputFile >> day;               // read day of the month
        inputFile >> delim;             // read comma
        getline(inputFile, month, ','); // read month as string untill ','
        inputFile >> year;              // read year
        inputFile >> delim;             // read comma
        inputFile >> money;             // read dollar ammount

        if (inputFile.peek() == EOF) // throws away the last line
        {
            break;
        }

        if (year == inputYear) // tells me the min, max, total and number of years
        {

            if (money > maxDay)
            {
                monthMax = month;
                dateMax = day;
                maxDay = money;
            }
            if (money < minDay)
            {
                monthMin = month;
                dateMin = day;
                minDay = money;
            }
            total += money;
            numYear++;
        }
    }
    cout << fixed << setprecision(2); // gives me two decimal places for the money
    return;
}
/**
 * @brief this will display the results per a givin year
 *
 * @param total
 * @param monthMin
 * @param monthMax
 * @param dateMin                all of these are prenting what they hold to the screen.
 * @param dateMax
 * @param minDay
 * @param maxDay
 * @param money
 * @param numYear
 */
void display(double total, string monthMin, string monthMax,
             int dateMin, int dateMax, double minDay, double maxDay, int numYear)
{
    int oficalYear = inputYear;
    string value;
    total > 0 ? value = "gain" : value = "loss"; // is basicaly an if statement
    cout << "The total " << value << " in " << oficalYear << " was $" << total << "\n";

    cout << "The average balance on the account in " << oficalYear
         << " was $" << total / numYear << "\n";

    cout << "The maximum deposit was made on " << monthMax << " "
         << dateMax << ", " << oficalYear << ": $" << maxDay << "\n";
    cout << "The maximum withdrawal was made on " << monthMin
         << " " << dateMin << ", " << oficalYear << ": $" << minDay << "\n";
}