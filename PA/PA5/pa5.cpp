/**
 * @file   WRITE FILENAME
 * @author WRITE STUDENT NAME
 * @brief  WRITE DESCRIPTION ABOUT THE PROGRAM/FILE
 * @date   WRITE DATE TODAY
 * 
 */
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

// Function prototypes
void task1();  // Task 1, Part 1/2
void task2();  // Task 2
void task3();  // Task 3
void task4();  // Task 4
void task5();  // Task 5
// Additional function prototypes here
int makingValid(string something);
int negative(string dosintMatter);

int computeFactorial1(int n);  // This is for task 1 part 1
int computeFactorial2(int n);  // This is for task 1 part 2

string getTaxBracket(double a); // This is for task 2

int sumOfDigits(int sums); // This is for task 3

double valueOfPi(int n); // This is for task 4

void printRepeatedly(int num); // This is for task 5

int main()
{
    // IMPORTANT NOTE: 
    // You might need to add cin.ignore() before
    // cin.get() if in the function you used cin >>

    // Task 1, Part 1 and 2
    task1();
    cout << "\nPress enter to continue...";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\n\n";


    // Task 2
    task2();
    cout << "\nPress enter to continue...";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\n\n";

    // Call other functions for the other tasks
    // Ensure that you implement the function first
    // before you call them here.

    // Task 3
    task3();
    cout << "\nPress enter to continue...";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\n\n";

    // Task 4
    task4();
    cout << "\nPress enter to continue...";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\n\n";

    // Task 5
    task5();
    cout << "\nPress enter to continue...";
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\n\n";

    return 0;
}

// Function definitions

/**
 * @brief This task will give you the factorial of a number,
 * by calculating first with the while loop then with the for loop.
 */
void task1()
{
    // Write the code here for Task 1, Part 1/2

    // Print task title
    cout << "Task 1\n"
         << "*********************************\n";
         
    // To compute for n!, get the value of n from the user
    // TODO: Per instruction, you have to put this inside 
    // a loop to validate that user input is valid.
    string prompt = "Please enter an integer >= 0: ";
    int makingValid(string prompt);
    int num = makingValid(prompt);
     
    // Call computeFactorial1
    int factor1 = computeFactorial1(num);
    cout << "While loop solution: " << num << "! = " << factor1 << '\n';
    // Call computeFactorial2
    int factor2 = computeFactorial2(num);
    cout << "For loop solution: " << num << "! = " << factor2 << '\n';
    cin.ignore();
}
int computeFactorial1(int num)
{
    int nFact = 1;
    int n = 1;
    while (n <= num)
    {
        nFact *= n;
        n++;
        
    }

    return nFact;
}
int computeFactorial2(int num)
{
    int nFact = 1;
    for (int n = 1; n <= num; n++)
    {
        nFact *= n;
    }
    return nFact;
}

/**
 * @brief This is a void function that determines 
 * the tax bracket for a user based on their annual income.
 */
void task2()
{
    // Write the code here for Task 2
    int makingValid(string prompt);
    string prompt = "Please enter the number of pay stubs: ";
    int payChecks = makingValid(prompt);
    double total = 0;
    
    for (int num=1; num <= payChecks; num++)
    {
        string notthing = "";
        string prompt = "Please enter the amount for pay stub #";
        int makingValid(string notthing);
        cout << prompt << num << ": ";
        int amount = makingValid(notthing);
        
        // .... Be nice... amount is fine, just dont give it a letter, 
        //or a negative for that matter, after a valid input.
        total = total + amount;
    }
    
    /*cout << getTaxBracket(15000); // output "medium income"
    cout << getTaxBracket(220000); // output "high income"          Test were good!
    cout << getTaxBracket(8000); // output "low income" */
    cout << "Total salary for the year: $" << fixed << setprecision(2) << total 
        << " Tax bracket: "  <<  getTaxBracket(total)
         << "\n";
    cin.ignore();
}
// Define and implement additional functions here
string getTaxBracket(double total)
{
    if (total < 15000)
    {
        string output = "low income ";
        return output;
    }
    else if (total > 200000)
    {
        string output = "high income ";
        return output;
    }
    else
    {
        string output = "medium income ";
        return output;
    }
}

/**
 * @brief This function determines the sum
 *  of the digits of a number.
 * 
 */
void task3()
{
    int negative(string prompt);
    string prompt = "Enter an integer to sum the digits of: ";
    int num = negative(prompt);
    cout << "Sum of " << num << " is: " << sumOfDigits(num)
        << "\n";
    
    /*cout << sumOfDigits(1261); // output 10
    cout << sumOfDigits(57); // output 12       Test were good!
    cout << sumOfDigits(90); // output 9*/
    cin.ignore();
}
int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

/**
 * @brief This function will approximate the value of pi
 * 
 */
void task4()
{
    double PiAppr = 0.0;
    int makingValid(string prompt);
    string prompt = "Please enter the number of terms to approximate pi: ";
    do
    {
        int approx = makingValid(prompt);
        PiAppr = valueOfPi(approx);
        if (PiAppr == 0)
        {
            cout << "Try soething bigger. ";
        
        }
    } while (PiAppr == 0);
    cout << "Pi approximation: " << setprecision(5) << PiAppr
        << "\n";
    cin.ignore();
}
double valueOfPi(int approx)
{
    double currentTerm = 0.0;
    double sum = 0.0;
    int termN = 3;
    int termP = 1;
    for(int term = 1; term <= approx; term++)
    {
        if (term%2 == 0)
        {
            currentTerm = 4 / static_cast<double>(termN);
            sum -= currentTerm;
            termN += 4;
        }
        else
        {
            currentTerm = 4 / static_cast<double>(termP);
            sum += currentTerm;
            termP += 4;
        }
    }

    return sum;
}

/**
 * @brief This function prints a value repeatedly 
 * following a specific pattern.
 * 
 */
void task5()
{
    int num = 0;
    void printRepeatedly(int num);
    string prompt = "Please enter number: ";
    do
    {
        num = makingValid(prompt);
        if (num == 0)
        {
            cout << "Try soething bigger. ";
        
        }
    } while (num == 0);
    printRepeatedly(num);
    cin.ignore();
}

void printRepeatedly(int num)
{
    
    for(int line = 1; line <= num; line++)
    {
        int sum = 0;
        for(int times = 1; times <= line; times++)
        {
            cout << line;
            sum += line;
        }
        cout << " " << sum;
        cout << "\n";
    }
}

int makingValid(string prompt)
{
    int num = 0;
    do
    {
        cout << prompt;
        cin >> num;
       
        // Check if input failed (non-numeric input, such as a letter)
        if (cin.fail()) 
        {
            // Change to a negative so my while knows it fails
            num = -1;
            // Clear the error flag on cin
            cin.clear();
            // Ignore any remaining characters in the input buffer up to the next newline
            // because of this numeric_limits<streamsize>::max() which requires the limit header to work
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Error! invalid input. Please try again: \n";
        }
        
    } while(num < 0);
    return num;
}
int negative(string prompt)
{
    int num = 0;
    do
    {
        // Check if input failed (non-numeric input, such as a letter)
        if (cin.fail()) 
        {
        // Clear the error flag on cin
        cin.clear();
        // Ignore any remaining characters in the input buffer up to the next newline
        // because of this numeric_limits<streamsize>::max() which requires the limit header to work
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error! invalid input. Please try again: \n";
        }
        cout << prompt;
        cin >> num;
        
    } while(cin.fail());

    if (num < 0)
    {
        num = num * -1;
    }
        
    return num;
}