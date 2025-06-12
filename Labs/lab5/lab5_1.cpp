/**
 * @file lab5_1.cpp
 * @author Ian Codding II
 * @brief Working with looping structures.
 * @version 0.1
 * @date 2025-02-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void activityTitle(int num);
void activity1();
void activity2();
void activity3();
void activity4();
void activity5();

int main()
{   
    activity1();
    activity2();
    activity3();
    activity4();
    activity5();

    return 0;
}

// Function definitions
void activityTitle(int num)
{
    // Update the cout statement below so it prints out the
    // correct activity number
    cout << "\nActivity " << num << "\n==========\n";
}

void activity1()
{
    activityTitle(1);

    // Change the following do-while loop to a while loop. 
    int inputNum = 1;
    while (inputNum != 0)
    {
        cout << "Enter a number (or 0 to quit): ";
        cin  >> inputNum;
    }
}

void activity2()
{
    activityTitle(2);
    // Change the following while loop to a do-while loop. 
    char doAgain = 'y';
    do
    {
        cout << "Do you want to loop again? (y/n) ";
        cin  >> doAgain;
    } while (toupper (doAgain) == 'Y');
}

void activity3()
{
    activityTitle(3);
    // Change the following while loop to a for loop. 
    for (int count = 0; count < 5; count++)
    {
        cout << "Count is " << count << endl;
    }
}

void activity4()
{
    activityTitle(4);
    // Change the following for loop to a while loop. 
    int x = 5;
    while(x > 0)
    {
        cout << x << " seconds to go. \n";
        --x;
    }
}

void activity5()
{
    activityTitle(5);
    // Make the following changes to the code below that uses nested loops:
    // 1. The code is supposed to print 3 lines with a $ and 5 stars on 
    //    each line, but it contains a logic error. Find and fix the error. 
    // 2. Then revise the code to follow each $ with just 4 stars, like this:
    //    $****
    //    $****
    //    $****
    // 3. Change the two loop control variable names to be more descriptive.
    /**
    for (int i = 1; i <= 3; ++i)
    {
        cout << '$';
        for (int j = 1; j <= 5; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
    */
    for (int line = 1; line <= 3; ++line)
    {
        cout << '$';
        for (int star = 1; star <= 4; ++star)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;
}