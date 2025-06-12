# PA6: Working with the Files and Functions
## Learner Objectives
At the conclusion of this programming assignment, participants should be able to:
* Read data from the CSV file
* Calculate running total, maximum, and minimum
* Use functions to break down the program into sub-tasks.

## Program Requirements
Create a C++ source code file. 
For this assignment, you are going to read data from the csv file **data.csv**.
There are many different ways to complete the task, however, for the purpose of the exercise, you are not allowed to use any libraries 
except **\<iostream\>**, **\<string\>**, **\<iomanip\>** and **\<fstream\>** and you are not allowed to use arrays. 
Observe the Sample Run for each of the tasks below, your program should closely follow the prompts and output for each task.
Use at least two functions in your program (10 pts.)
## Program Details

- [ ] The program should ask the user for the name of the file. It should display an error if the file does not exist and ask for the file name again.

- [ ] The program will read data from the file. The file has multiple lines. Each line contains the day of the month, the name of the month, the year, and the integer amount separated by commas. The dates are listed in increasing order from the year 2000 to the year 2004. The integer amount ranges from -1985 to 8015.
- [ ] The program should ask users to choose the year from 2000 to 2004. It must check user input. If the year is wrong, the program should ask the user again.
- [ ] The program should read through the file. If the entry corresponds to the chosen year, the program should process the entry.
- [ ] The program must maintain the running total, running minimum, running maximum, and the total number of entries for the specified year.        
> Hint: To calculate the running minimum, the program should initialize the minValue variable to a very big number, then compare the new amount to the minValue. If the new amount is smaller than the minValue, the minValue becomes an equal new amount.

- [ ] The program should display:
  * the total gain (if the value is positive) or total loss (if the value is negative) for the chosen year. 
  * the average balance on the account in the chosen year
  * the maximum deposit made and the date of this deposit in the chosen year
  * the maximum withdrawal (negative value) and the date of this withdrawal in the chosen year


The program below may be or may not be used as the starting point for this assignment (we will discuss it in class)
```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    int day,minDay, maxDay, year,
        money;
    char delim;

    //Create a file object
    ifstream inputFile;
    inputFile.open("data.csv");

        //skip first row
    getline(inputFile, line);


    //read second line
    inputFile>> day;                //read day of the month
    inputFile>> delim;              //read comma
    getline(inputFile, month,',');  //read month as string untill ','
    inputFile>> year;               //read year
    inputFile>> delim;              //read comma
    inputFile >> money;             //read dollar ammount
    // Read newline character (\n) need for the last raw 
    inputFile.get(); 


    inputFile.close();              //close the file
    return 0;
}
``` 

Example of the output:
```
Enter the name of the file: data.txt
Error opening the file!

Enter the name of the file: data.csv
Enter the year from 2000 to 2004:1999
You entered a WRONG year

Enter the year from 2000 to 2004:2000
The total gain in 2000 was $74599.00
The average balance on the account in 2000 was $3552.33
The maximum deposit was made on November 10, 2000: $7927.00
The maximum withdrawal was made on July 3, 2000: $-1832.00
```
Another Example:
```
Enter the name of the file: data.csv
Enter the year from 2000 to 2004:2001
The total gain in 2001 was $51353.00
The average balance on the account in 2001 was $2445.38
The maximum deposit was made on December 25, 2001: $7969.00
The maximum withdrawal was made on June 19, 2001: $-1879.00
```
Or
```
Enter the name of the file: data.csv
Enter the year from 2000 to 2004:2004
The total loss in 2004 was $-882.00
The average balance on the account in 2004 was $-88.20
The maximum deposit was made on March 9, 2004: $2908.00
The maximum withdrawal was made on May 1, 2004: $-1900.00
```
## Challenge Yourself Beyond The Scope of the PA (Not Required)
- [ ] After displaying the result for the year, ask users if they would like to check the other year(y/n). Run the program until the user enters 'n'.
- [ ] Instead of using for the year, ask for the time interval starting and ending on the user's defined dates.

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
