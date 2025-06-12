# Lab 4: Making Decisions

## Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Work with `if/else` statements
* Work with a `switch` statement
* Generate random numbers in a specific range
* Manipulate or format outputs, `setw()`
* Passing parameters to the void function

## Prerequisites
* Understanding of the lessons taught in Chapters 1-4

## Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Gaddis book lab materials

## Getting Started
1. Open terminal.

   If you haven't done this yet, configure your git "identity":
   ```
   $ git config --global user.name "FIRST_NAME LAST_NAME"
   $ git config --global user.email "YOUR_@COLLEGE_EMAIL"
   ```
2. Make sure your current working directory is `~/CS150/Labs`. Navigate to this directory if needed.
3. Clone this repository using `git clone <REPO_URL> lab4`. This should create a folder `lab03` under `~/CS150/Labs`.
4. Change the directory to `lab4`.
5. Open Visual Studio Code by typing in the terminal `code .`


## Lab 4.1 - Math Tutor
- [ ] Create a lab4_1.cpp file in the text editor.
- [ ] Write a program that can be used as a math tutor for a young student. The program should display a menu with the following options
````
Choose what type of problems you would like to work on:
1. Addition
2. Subtraction
3. Multiplication
Enter menu choice (1,2, or 3):
````
- [ ] The program should get the user's choice and save it in a variable choice.
- [ ] The program should generate two random numbers in the range of 10 to 100 and save them in variables num1 and num2.
- [ ] The program should use a switch statement to call one of three functions addition, subtraction, or multiplication based on user choice. The switch statement should have a default case that prints out "Invalid choice".
- [ ] Each function should display the math problem on the screen, and get the user's answer. If the answer is correct, a message of congratulations should be printed. If the answer is incorrect, a message should be printed showing the correct answer.
- [ ] Make sure to use function header comments and in-line comments
- [ ] The example of program output (notice indentations)
````
Enter menue choise (1,2, or 3): 2
        14
     -  29
        __
       -15
Good Job!
````
- [ ] The position of the cursor for the user to enter their answer should depend on the length of the correct answer.
- [ ] The start-up code is provided below
```cpp 
/**
 * @file lab4_1.cpp
 * @author your name (you@domain.com)
 * @brief Math Tutor
 * @version 0.1
 * @date 2022-09-15
 */

#include <iostream>
#include <cstdlib> //rand()
#include <ctime> //time(NULL)
#include <iomanip> //setw()

using namespace std;

//function prototypes
void displayMenue();
void addition(int n1, int n2);
void subtraction(int n1, int n2);
void multiplication(int n1, int n2);

int main()
{
    displayMenue();
    int choice;
    cin >> choice;

   //GENERATE RANDOM SEED
   //GENERATE TWO RANDOM NUMBERS AND SAVE IT IN num1 AND num2

   //USE SWITCH STATEMENT BASED ON USER CHOICE
   //SWITCH STATEMENT MUST HAVE DEFAULT OPTION

}

// IMPLEMENT FUNCTIONS HERE
   ```
- [ ] If you specified the name for the executable, add it to .gitignor
- [ ] Run git add -A and git commit -m "lab 4.1 is done"

## Lab 4.2 - Math Tutor2
- [ ] Copy lab4_1.cpp into lab4_2.cpp.
- [ ] In lab4_1.cpp you implemented three functions `addition`, `subtraction`, and `multiplication`. The code in those functions is very similar except for one operator. Because of this, those functions can be combined into one.
- [ ] Create `void operation(int n1, int n2, char op)`. It should accept two integer numbers and one char character as parameters. When you call this function, pass the correct character for `op` to it. For example, `operation(num1, num2,'+')`. Replace the function calls for addition, subtraction, and multiplication with function calls to `operation`.
- [ ] Inside the operation function, create a `switch` statement based on the value of `op`. This statement should calculate the correct answer and store it in the correct variable;
- [ ] Remove `addition`, `subtraction`, and `multiplication` functions.
- [ ] Compile and run `lab4_2.cpp`. Make sure it works as intended.
- [ ] If you specified the name for the executable, add it to `.gitignor`
- [ ] Run `git add -A` and `git commit -m "lab 5.2 is done"`
- [ ] Run `git push`
  
## Submitting Assignments
* Present your work to the instructor. Prepare to answer questions.
* It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**

# Problem Sets (3-4)
- [ ] If there is time left in the lab, you will be working on the assigned Problem Sets in CodeStepByStep.
- [ ] If they have been completed, please show the instructor the completed work so your work can be graded. This is also a great opportunity to ask questions or clarifications regarding the problem sets
- [ ] Completed problem sets should be **Mark as Done in Canvas**.
