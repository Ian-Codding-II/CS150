# PA5: Loops and More Functions

### Learner Objectives
At the conclusion of this programming assignment, participants should be able to:
* Implement `while`, `for`, and `do-while` loops to repeat a sequence of C++ statements
* Use void functions to break down the program into sub-tasks.

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* This programming assignment is adapted from Dr. Gina Sprint's Computer Science I class at Gonzaga University
* Hanly and Koffman
* Reges and Stepp, 2008

## Program Requirements
1. Create a C++ source code file named `pa5.cpp`. 
2. For this assignment, you are going to solve 5 programming tasks. 
3. Each task solution is to be implemented in their own function. We are decomposing our program even further by having each task function call other functions.
4. All variables needed to implement a task will be declared inside the appropriate function.  
5. At runtime, each task is to be labeled and separated by a prompt using `cin.get()`, such as **"Press enter to continue…."** or using `getline()`, such as **"Type yes to continue..."** Observe the Sample Run for each of the tasks below and your program should closely follow the prompts and output for each task.

**Note**: Please cite all the sources you use in your code (if any).

## Program Details

### Task 1
Solve this problem twice, once using a `while` loop (part 1) and again using a `for` loop (part 2). The code for both **Part 1** and **Part 2** needs to be written inside the `task1()` function.

#### Part 1
Inside the `task1` function,
- [ ] Prompt the user for an integer, `n`, where `n >= 0`. You MUST validate the user input is correct. The program will continue to ask user for another value of `n` for every invalid input.
- [ ] Create another function called `computeFactorial1` that ***accepts*** an `int` value representing `n` of the factorial. In this function, use a `while` loop to determine the factorial of `n`, represented as `n!`. This function ***returns*** an `int` value representing the result of the factorial of `n`.
     * The factorial of any number `n` can be represented as `n! = n * (n – 1) * (n – 2) * ... * 1`. 
     * `0!` is equal to `1` and `1!` is also equal to `1`.
     * Example: `5! = 5×4×3×2×1 = 120`
     * If the function is written correctly, the code below should print out the correct output
        ```cpp
        cout << factorial(5); // output 120
        cout << factorial(0); // output 1
        cout << factorial(7); // output 5040
        ```
- [ ] Look at the *Sample Run (Part 1 & 2)*, and you should be able to infer where to call `computeFactorial1` inside `task1` function. To give you some help on this first task, the `task1` function should look similar to this
    ```cpp
    void task1()
    {
        // Print task title
        cout << "Task 1\n"
             << "*********************************\n";
             
        // To compute for n!, get the value of n from the user
        // TODO: Per instruction, you have to put this inside 
        // a loop to validate that user input is valid.
        int num = 0;
        cout << "Please enter an integer >= 0: ";
        cin >> num;
        
        // Call computeFactorial1
        int factor1 = computeFactorial1(num);
        cout << "While loop solution: " << num << "! = " << factor1 << '\n';
    }
    ```
- [ ] Test your program. Determine some test cases including corner cases to ensure the `task1` function works correctly.

#### Part 2
- [ ] Create another function called `computeFactorial2`. This function is very similar to `computeFactorial1`. This function also ***accepts*** an `int` value representing `n` of the factorial. However in this function, you MUST use a `for` loop to determine the factorial of `n`. This function then ***returns*** an `int` value representing the result of the factorial of `n`.
- [ ] Add the necessary code inside `task1` function to get a similar output below.

#### Sample Run (Part 1 & 2)
```
Task 1
*********************************
Please enter an integer >= 0: 5
While loop solution: 5! = 120
For loop solution: 5! = 120

Press enter to continue...
```

### Task 2
Write a `void` function that determines the tax bracket for a user based on their annual income. The code for this task needs to be written inside the `task2()` function. Your program should perform the following:
- [ ] Prompts the user for the number of paychecks
- [ ] You MUST validate that the user inputs a positive number. The program will continue to ask users for another number of paychecks for every invalid input.
- [ ] Depending on the number of paychecks, you will have to loop to prompt the user for each of the paycheck values
- [ ] In the loop, you should get the running sum of the paycheck values
- [ ] Create another function called `getTaxBracket` that ***accepts*** a `double` value representing the total sum of the paychecks. This function will ***return*** a `string` corresponding to correct tax bracket based on the total sum. 
    | Sum of Paychecks   | Tax Bracket   |
    |--------------------|:-------------:|
    | < $15,000          | low income    |
    | $15,000 - $200,000 | medium income |
    | \> $200,000        | high income   |
    * If the function is written correctly, the code below should print out the correct output
        ```cpp
        cout << getTaxBracket(15000); // output "medium income"
        cout << getTaxBracket(220000); // output "high income"
        cout << getTaxBracket(8000); // output "low income"
        ```
- [ ] Displays a message corresponding to the user's total salary and their tax bracket. To display the tax bracket here, call the `getTaxBracket` function and supply it with the appropriate arguments.

#### Sample Run
```
Task 2
*********************************
Please enter the number of pay stubs: 4 
Please enter the amount for pay stub #1: 2500 
Please enter the amount for pay stub #2: 3000 
Please enter the amount for pay stub #3: 500 
Please enter the amount for pay stub #4: 2000
Total salary for the year: $8000.00 Tax bracket: low income

Press enter to continue…
```
> **Note:** The total salary should be rounded by the closest cent and have a $ in front.

### Task 3
Write a `void` function that determines the sum of the digits of a number. The code for this task needs to be written inside the `task3()` function. Your program should perform the following:
- [ ] Prompt the user for an integer. **Note**: If the user enters a negative number, convert the number to its absolute value.
- [ ] Create a function called `sumOfDigits` that ***accepts*** an `int` representing any positive number. Compute the sum of the digits of the number and ***return*** the sum.
    * Example, the sum of the digits of `1261` is `10`. (i.e., `1 + 2 + 6 + 1 = 10`)
    * If the function is written correctly, the code below should print out the correct output
        ```cpp
        cout << sumOfDigits(1261); // output 10
        cout << sumOfDigits(57); // output 12
        cout << sumOfDigits(90); // output 9
        ```
- [ ] In `task3` function, display the sum of the digits of the number by calling `sumOfDigits` function and supply it with the appropriate arguments.

**Hint**: Think about how to get a digit in the "one's" position? Could integer division and/or modulo operator help?
**Note**: Do not use strings to solve this problem

#### Sample Run
```
Task 3
*********************************
Enter an integer to sum the digits of: 427
Sum of 427 is: 13

Press enter to continue…
```

### Task 4
This problem is adapted from problem 5.15 of Hanly and Koffman. The problem states the following:

The value for pi can be determined by the series equation:
`pi = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - ...`


Written mathematically (easier to see the pattern):

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://render.githubusercontent.com/render/math?math=\pi\:=\frac{4}{1}-\frac{4}{3}%2B\frac{4}{5}-\frac{4}{7}%2B\frac{4}{9}-..." height="50"> 

**Hint**: Notice 3 things:
* The numerator of each term of the sequence is always 4
* The denominator of each term of the sequence starts at 1 and increases by 2
* The sign (+ or -) of the term starts positive and alternates

Write a `void` function to approximate the value of pi using the above formula. The code for this task needs to be written inside the `task4()` function. Your program should perform the following:
- [ ] Prompt the user for the number of terms. Values should not be 0 or negative.
- [ ] Create an additional function called `valueOfPi` that ***accepts*** an `int` that represents that number of terms. This function will ***return*** the approximate value of pi as `double`.
- [ ] In `task4` function, display the pi approximation by calling `valueOfPi` function and supply it with the appropriate arguments.

#### Sample Run
```
Task 4
*********************************
Please enter the number of terms to approximate pi: 20
Pi approximation: 3.09162

Press enter to continue…
```

### Task 5

#### Part 1 
Write a `void` function that prints value repeatedly following a specific pattern. The code for this task needs to be written inside the `task5()` function. Your program should perform the following:
- [ ] Prompt a user for an integer `n`. Values should not be 0 or negative.
- [ ] Create an additional function called `printRepeatedly` that ***accepts*** an `int` that represents `n`. This function should print each number (from `1` to `n`) the same number of times as its value. This function DOES NOT ***return*** anything.
    * An input of 5 will result in the following output:
        ```
        1
        22
        333
        4444
        55555
        ```
- [ ] In `task5` function, display the result by calling `printRepeatedly` function and supply it with the appropriate arguments.

#### Part 2
- [ ] Now, modify the code inside `printRepeatedly` function that displays sum of each line at the end of each line:
    ```
    1 1
    22 4
    333 9
    4444 16
    55555 25
    ```

#### Sample Run
```
Task 5
*********************************
Please enter number: 3
1 1
22 4
333 9

Press enter to continue…
```

## Starter Code
Use the starter code below for this programming assignment.
```cpp
/**
 * @file   WRITE FILENAME
 * @author WRITE STUDENT NAME
 * @brief  WRITE DESCRIPTION ABOUT THE PROGRAM/FILE
 * @date   WRITE DATE TODAY
 * 
 */
#include <iostream>
using namespace std;

// Function prototypes
void task1();  // Task 1, Part 1/2
void task2();  // Task 2
void task3();  // Task 3
void task4();  // Task 4
void task5();  // Task 5
// Additional function prototypes here

int main()
{
    // IMPORTANT NOTE: 
    // You might need to add cin.ignore() before
    // cin.get() if in the function you used cin >>
    
    char ch;

    // Task 1, Part 1 and 2
    task1();
    cout << "\nPress enter to continue...";
    cin.get(ch);
    cout << "\n\n";
    
    // Task 2
    task2();
    cout << "\nPress enter to continue...";
    cin.get(ch);
    cout << "\n\n";

    // Call other functions for the other tasks
    // Ensure that you implement the function first
    // before you call them here.

    return 0;
}

// Function definitions

/**
 * @brief WRITE DESCRIPTION OF WHAT FUNCTION DOES
 */
void task1()
{
    // Write the code here for Task 1, Part 1/2
}

/**
 * @brief WRITE DESCRIPTION OF WHAT FUNCTION DOES
 */
void task2()
{
    // Write the code here for Task 2
}

// Define and implement additional functions here
```

## Challenge Yourself Beyond The Scope of the PA (Not Required)
This problem is adapted from problem 2.4 of Reges and Stepp, 2008. 
- [ ] Write a function that produces the following output. Prompt the user for the height to make it possible to change the number of stairs in the figure.

### Sample Run
```
Please enter an integer height: 5

                      o  *******
                     /|\ *     *
                     / \ *     *
                 o  ******     *
                /|\ *          *
                / \ *          *
            o  ******          *
           /|\ *               *
           / \ *               *
       o  ******               *
      /|\ *                    *
      / \ *                    *
  o  ******                    *
 /|\ *                         *
 / \ *                         *
********************************

Press enter to continue…
```

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
