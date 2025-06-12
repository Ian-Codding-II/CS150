/**
 * @file chatbox.cpp
 * @author your name Ian Codding II
 * @brief This program is made to converse with the user on cars.
 * @version 0.1
 * @date 2025-02-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // Prompt user to input name
    string userFullName = "";
    
    cout << "What is your name? ";
    //cin >> userName;    Only use first name. You can modify this to allow multi-word
    //sure, I'll do that.
    getline(cin, userFullName);
    cout << endl << "Hi there, it is nice to meet you " << userFullName << " my name is John" << endl;

    size_t pos = userFullName.find(' '); // Find the first space
    string userFirstName = (pos == string::npos) ? userFullName : userFullName.substr(0, pos); 
    // Now I only have what the user typed before the space.

    // Prompt user to input location
    string userFrom = "";
    cout << "So where are you from " << userFirstName << "? ";
    getline(cin, userFrom);   // Only use single word. You can modify this to allow multi-word
    cout << endl << "Oh thats cool! I dont think i've been to " << userFrom << endl;
    
    int userDateBirth; //promt user for age
    cout << "I wounder what it was like when you were a kid. Hey, what year were you born? ";
    cin >> userDateBirth;

    // This whole section is here because I want this program to have the current year.
    time_t timestamp = time(&timestamp); // Finds current time
    struct tm datetime = *localtime(&timestamp); //Converting a timestamp from a time value in seconds to one in years
    int year = datetime.tm_year + 1900; // In struct tm, tm_year is the year since 1900. 
    //So, we asigned the current year to a variable "year"

    
    int userAge = year - userDateBirth; // this will give us the users date of birth.
    int botAge = userAge/1.5; // Now, I could have just asignied an age to the bot.
    // for that, it would be, double userOlderThenBot = userAge/someAgeForBot;
    //However, I decided that would be dull
    cout << endl << "You are around " << userAge << " years old, that makes you 1.5 times as old as I am! I'm only " 
        << botAge << " years YOUNG!." << endl; //Plus, this is funny when you have someone 90 years old
        // and then brag about yourself being 60 years young.

    cin.ignore(); // When i cin userDateBirth it leaves stuff :(  this ignores that stuff.

    string carName = ""; // Ask for a car name
    cout << "What's your favorite car? "; 
    getline(cin, carName); //any word really.
    cout << endl << "Wow, I've always wanted a " << carName << " as well." << endl;
    //I dont think its worth providing a selection and of options. So they really can just say jeberish.

    
    float carPrice, interest, loanTime;

    //get a number
    cout << "How much does it cost? ";
    cin >> carPrice;
    cout << "Gee, that is spendy. " << endl;

    //get another number
    cout << "What's the annual interest rate I would have to pay for the "
        << carName << " ? ";
    cin >> interest; cout << endl;

    //and one final number
    cout << "Hmmm, If you had to take out a loan for the " 
        << carName << " how many years would it be for? ";
    cin >> loanTime; cout << endl;

    if(carPrice <= 0)
    {
        cout << "come on, there not giving it too you, I know your draming. Ill talk to you latter " << userFirstName;
        cout << endl;
    }
    else if(interest <= 0)
    {
        cout << "Hahahahaha, there not giving it away, you crack me up. Ill talk to you latter " << userFirstName;
        cout << endl;
    }
    else if(loanTime <= 0)
    {
        cout << "??? now... you know that does not make sence, cant make a loan like that. Ill talk to you latter " << userFirstName;
        cout << endl;
    }
    else
    {

        //hopfully they were realistic in my request
        double interestPercent = interest/100.0; //this is a percent in decimal
        double monthlyPayments = (carPrice*(interestPercent/12))/(1-pow(1+interestPercent/12, -12*loanTime));
        // above is the equation for the monthly payments.
        cout << "Wow, if you wanted to get the " << carName << endl << "you would have a monthly payment of $"
            << fixed << setprecision(2) << monthlyPayments << ", I don't know about you but thats pricey in my book" << endl;
            //And this will display it with two zeros behind it.
            
        double total = monthlyPayments*12*loanTime; // Total amount payed
            cout << "Overall it comes to a total of $" << total
                << ". Well, I wish you good luck with that " << userFirstName << "." << endl;
    }


    return 0;
}