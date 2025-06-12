# Lab 14: Pointers

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Use pointers to access and change the value of the variable 
* Understand the relationship between arrays and pointers
* Use pointers as a function parameter


## Getting Started
1. Open terminal.

   If you haven't done this yet, configure your git "identity":
   ```
   $ git config --global user.name "FIRST_NAME LAST_NAME"
   $ git config --global user.email "YOUR_@COLLEGE_EMAIL"
   ```
2. Make sure your current working directory is `~/cs150/lab`. Navigate to this directory if needed.
3. Clone this repository using `git clone <REPO_URL> lab13`. This should create a folder `lab13` under `~/cs150/lab`.
4. Change directory into `lab13`. Inside you should find three files 13.1.cpp, 13.2.cpp, and 13.3.cpp. You will make changes to those files according to instructions.

## Lab 14.1 - Intro to Pointers

- [ ] Follow the instruction in 15.1.cpp file
 ```cpp 
  /**
 * @file   15.1.cpp
 * @author WRITE STUDENT NAME(S)
 * @brief  This program demonstrates the use of pointers.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    //define the pointer to int called ptr


    //store the address of value in ptr

    //print the value and address of x using x
    cout << "The value of x is " << ___ << endl;
    cout << "The address of x is " << ___ << endl;

    //print the value and address of x using ptr
    cout << "The value of x is " << __ << endl;
    cout << "The address of x is " << __ << endl;

    //multiply the x by 2 using x

    //and print new value of x using x
    cout << "New value of x is " << __<< endl;

    //multiply the x by 2 again using ptr

    //and print new value of x using ptr
    cout << "New value of x is " << ___<< endl;
    
    return 0;
}
   ```
- [ ] Update the header comment with the correct information.
- [ ] Run the program to see how it works. 
- [ ] Show your work to the instructor
- [ ] Commit with the message "15.1 is done. Demonstrated to the instructor"
Note: If you doing this lab outside the classroom and did not show it to the instructor, commit with the message "15.1 is done".
- [ ] Push your code back to the GitHub repo then continue with **Lab 15.2**.

## Lab 14.2 - The Relationship Between Array and Pointer
- [ ] Follow the instructions in 14.2.cpp file
 ```cpp 
/**
 * @file   15.2.cpp
 * @author WRITE STUDENT NAME(S)
 * @brief  This program process an array using pointers.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    //Remember, the array name can be used as a pointer
    cout << "Enter " << SIZE << " numbers"<<endl;
    for (int i = 0; i < SIZE; i++)
    {
        //change the line below to use a pointer
        cin >> numbers[i];
    }
    cout << "You entered:\n";
    for (int i = 0; i < SIZE; i++)
    {
        //change the line below to use a pointer
        cout << numbers[i] <<" ";
    }
    cout << endl;

    //add 1 to each element of the array using the pointer


    //display array using pointer
    cout << "New array:\n";

}

   ```
- [ ] Update the header comment with the correct information.
- [ ] Run the program to see how it works. 
- [ ] Show your work to the instructor
- [ ] Commit with the message "15.2 is done. Demonstrated to the instructor"
Note: If you doing this lab outside the classroom and did not show it to the instructor, commit with the message "15.2 is done".
- [ ] Push your code back to the GitHub repo then continue with **Lab 15.3**.

## Lab 14.3 - Using Pointer as a Function Parameters
- [ ] In this lab, you will make changes to the function, function prototype, and function call. The function swapNums should use pointers as parameters instead of reference parameters.
 ```cpp 
 /**
 * @file   15.3.cpp
 * @author WRITE STUDENT NAME(S)
 * @brief  This program demonstrates the use of pointers as the function parameters.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
using namespace std;

// Function prototype ---change it
void swapNums(int &number1, int &number2);

int main()
{
    int num1 = 5,
        num2 = 7;

    // Print the two variable values
    cout << "In main the two numbers are "
         << num1 << " and " << num2 << endl;

    // Call a function to swap the values stored
    // in the two variables
    //-------------change it----------------
    swapNums(num1, num2);

    // Print the same two variable values again
    cout << "Back in main again the two numbers are "
         << num1 << " and " << num2 << endl;

    return 0;
}

/**
 * @brief This function swaps two numbers
 * @param number1 pointer to the first number
 * @param number2 pointer to the second number
 */
 //change the function below to use pointer variables as the parameter
void swapNums(int &number1, int &number2)
{
    // Swap the values that came into the parameters 
    int temp = number1;
    number1 = number2;
    number2 = temp;

    // Print the swapped values
    cout << "In swapNums, after swapping, the two numbers are "
         << number1 << " and " << number2 << endl;
    return 0;
}

   ```
- [ ] Update the header comment with the correct information.
- [ ] Run the program to see how it works.
- [ ] Make necessary changes to the function, function prototype, and function call.
- [ ] Run the program again to make sure you are getting the same result. 
- [ ] Show your work to the instructor
- [ ] Commit with the message "15.3 is done. Demonstrated to the instructor"
Note: If you doing this lab outside the classroom and did not show it to the instructor, commit with the message "15.3 is done".
- [ ] Push your code back to the GitHub repo.


## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
