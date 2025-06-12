/**
 * @file lab3_3.cpp
 * @author Ian Codding II
 * @brief convert seconds to days hours and min
 * @version 0.1
 * @date 2025-02-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

/**
 * @brief this function converts 
 * seconds to days hours min
 * 
 */
const int secoundsToMinutes=60;
const int secondsToHours=60;
const int secondsToDays=24;
int main()
{
    //declare variables
    int seconds = 0;
    int days = 0;
    int hours = 0;
    int min = 0;

    //Ask user for seconds
    cout << "Enter number of seconds: ";
    cin >>  seconds; cout << endl;
    cout << seconds << " seconds ";

    // Computation of days hours min and seconds
    min = seconds/secoundsToMinutes%secondsToHours;
    hours = seconds/secoundsToMinutes/secondsToHours%secondsToDays;
    days = seconds/secoundsToMinutes/secondsToHours/secondsToDays;
    seconds = seconds%secoundsToMinutes;

    //print value to user
    cout << "is equivalent to " << days << " day(s) " << hours 
        << " hour(s) " << min << " minute(s) and " << seconds << " second(s)" << endl;


    return 0;
}
