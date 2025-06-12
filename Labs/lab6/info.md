# Lab 6: Functions and Writing to the File

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Modularize programs using `void` functions 
* Modularize programs using value-returning functions
* Document programs with in-line comments, file header comment and function header comments
* Write data to a file

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Gaddis book lab materials


## Lab 6.1 - Modularizing a Program with `void` Functions
- [ ] Create a `lab6_1.cpp` file. Open the C++ source file `main.cpp` in the text editor and copy the source code below.
```cpp 
 /**
 * @file   WRITE FILE NAME
 * @author WRITE STUDENT NAME
 * @brief  WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int choice = 0;
    while (choice != 4)
    {
        // Display menu
        cout << "Program to calculate areas of objects\n"
             << "        1 -- square\n"
             << "        2 -- circle\n"
             << "        3 -- right triangle\n"
             << "        4 -- quit\n\n";

        // Prompt user to enter a choice from the menu
        cout << "Pick [1-4] from the menu: ";
        cin >> choice;

        double area = 0.0;
        if (choice == 1)
        {
            // Prompt user length of square
            double len = 0.0;
            cout << "Enter length: ";
            cin >> len;

            // Compute for area of square
            area = len * len;
            cout << "Area = " << area << '\n';
        }
        else if (choice == 2)
        {
            // Prompt user for radius of circle
            double rad = 0.0;
            cout << "Enter radius: ";
            cin >> rad;

            // Compute for area of circle
            area = PI * rad * rad;
            cout << "Area = " << area << '\n';
        }
        else if (choice == 3)
        {
            // Prompt user for base and height of the right triangle
            double base = 0.0, height = 0.0;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            // Compute area of right triangle
            area = 0.5 * base * height;
            cout << "Area = " << area << '\n';
        }
        else if (choice != 4)
        {
            cout << "Invalid Menu!\n";
        }
    }

    return 0;
}
   ```
- [ ] Update the header comment with the correct information.
- [ ] Modularize the program by,
   - [ ] Adding the following 4 functions.
      * `void displayMenu()`
      * `void findSquareArea(double length)`
      * `void findCircleArea(double radius)`
      * `void findTriangleArea(double base, double height)`
   
   - [ ] To do that you will need to carry out the following steps:
      - [ ] Write prototypes for the four functions and place them above the `main` function.
      - [ ] Write function definitions (consisting of a function header and initially empty body) for the four functions and place them after the closing brace of the `main` function.
      - [ ] Move the appropriate code out of `main` and into the body of each function.
      - [ ] All of the functions that compute areas will now need to define a variable named `area`.
      - [ ] Move the definition for the named constant `PI` out of `main` and place it above the `main` function and above the function prototypes. This turns the `PI` into a **global variable**.
      - [ ] In `main`, replace each block of removed code with a function call to the function now containing that block of code.
   
- [ ] Compile the code, fixing any errors until it compiles without errors. Then test it. Make sure it runs correctly for all menu choices.

- [ ] Write function header comments for each function. It should be written above each function definition. The function header comment MUST include:
   * a description of what the function does
   * a description of what each parameter is 
   * a description of what the function returns (NOT NEEDED AT THIS PART OF THE LAB)
 - [ ] Commit your code with a message "*lab 6.1 completed*". Recall the terminal commands:
   ```
   $ git add -A
   $ git commit -m "COMMIT MESSAGE"
   ```
- [ ] Push your code back to the GitHub repo then continue with **Lab 6.2**.


## Lab 6.2 - Using a Function that Returns a Value
- [ ] Create a `lab6_2.cpp` file and copy the source code below.
```cpp 
 /**
 * @file   WRITE FILE NAME
 * @author WRITE STUDENT NAME
 * @brief  This program illustrates how to use a value-returning
 *         function to get, validate, and return input data.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice();

int main()
{
    int choice;

    // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
    // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.

    cout << "You entered " << choice << endl;
}

/**
 * @brief This function prompts a user for a input
 *        between 1 to 4 and validates it to ensure
 *        a valid input has been made. Input is then
 *        returned as an integer.
 * 
 * @param NAME_OF_1ST_PARAMETER DESCRIPTION
 * @param NAME_OF_2ND_PARAMETER DESCRIPTION
 * @return int  user choice as an integer between the
 *              values of...
 */
int getChoice()
{
    int input;

    // Get and validate the input
    while (1)
    {
        cout << "Enter an integer between 1 and 4: ";
        cin >> input;

        if (input >= 1 && input <= 4)
        {
            break;
        }
        cout << "Invalid input. ";
    }

    return input;
}
   ```
- [ ] Update the header comment with the correct information.
- [ ] Read through the code to see how it works. Notice that the `getChoice` function validates the input before returning it.

- [ ] Follow the directions given in the uppercase comments in `main`.
   ```
   // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
   // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
   ```

- [ ] Compile the program and the name of the executable file should be `Lab6_3`. Run the program. When prompted for input, use the test case shown in the sample run below. You should get the same results.
   ```
   Enter an integer between 1 and 4: 0
   Invalid input. Enter an integer between 1 and 4: 9
   Invalid input. Enter an integer between 1 and 4: 2
   You entered 2
   ```

- [ ] Now make the `getChoice` function more versatile so it can validate that a choice is in any desired range, not just 1 – 4. Do this by carrying out the following steps:
   - [ ] Add two integer parameters named `min` and `max` to the function header and modify the function prototype to agree with this.
   - [ ] Revise the function so that it now validates that the input is between `min` and `max`. Remember to change the error prompt as well as the test condition of the `while` loop.
   - [ ] Revise the line of code in `main` that calls the function so that it now passes two arguments to the function.
   - [ ] Pass the values **1** and **4** to the function (though other values would work also).
   - [ ] Now recompile and rerun the program, again using the data from the sample run shown below. The program should produce the same results as it did before.
      ```
      Enter an integer be tween 1 and 4: 0
      Invalid input. Enter an integer between 1 and 4: 9
      Invalid input. Enter an integer between 1 and 4: 2
      You entered 2
      ```
   - [ ] Pass the values **1** and **20** to the function
      ```
      Enter an integer between 1 and 20: 25
      Invalid input. Enter an integer between 1 and 20: 9
      You entered 9
      ```

- [ ] Update the function header comments of `getChoice` to reflect the description of the function, description of the parameters, and the description of what it returns.
- [ ] Commit your code with a message "*lab 6.2 completed*".
- [ ] Push your code back to the GitHub repo then continue with **Lab 6.3**.

## Lab 6.3 - Modularizing a Program with Value-Returning Functions
For this lab exercise, you will make additional improvements to the area's program you worked on in **Lab 6.1**.

- [ ] Create a `lab6_3.cpp` file and copy the code from the completed program in Lab 6.1
- [ ] Update the header comment with the correct information for this lab exercise.
- [ ] Copy the `getChoice` function you just wrote in `lab6_2.cpp` and paste it below the `displayMenu` function definition. 
- [ ] Add a function prototype for the `getChoice` function at the top of the program where the other prototypes are located. Now, change the following line of code in `main`:
   
   ```cpp
   cin >> choice;
   ```
   
   to
   
   ```cpp
   choice = getChoice(1, 4);
   ```
   
   This will ensure that `choice` is assigned a value between 1 and 4. Therefore the final `else if` can be removed from the `if/else if` statement that controls the branching. After doing this, test the program to make sure everything works so far, before going on to the next step.

- [ ] Now, make the `findSquareArea`, `findCircleArea`, and `findTriangleArea` functions into value-returning functions. They should each return a `double` value. Change their function headers and function prototypes to indicate this. Then, instead of having them print the area, have them return the area they have computed.
- [ ] Finally, change the call to each of these functions in the `main` function so that the value returned by the function call will be printed. For example, you will change

   ```cpp
   if (choice == 1)
   {
       // Prompt user length of square
       double len = 0.0;
       cout << "Enter length: ";
       cin >> len;
       
       findSquareArea(len);
   }
   ```
   
   to
   
   ```cpp
   if (choice == 1)
   {
       // Prompt user length of square
       double len = 0.0;
       cout << "Enter length: ";
       cin >> len;
       
       cout << "Area = " << findSquareArea(len) << endl;
   }
   ```

- [ ] Compile the code, fixing any errors until it compiles without errors. Then test it. Make sure it runs correctly for all menu choices. 
- [ ] Commit your code with a message "*lab 6.3 completed*".
- [ ] Do a final push of your code back to the GitHub repo.

## Lab 6.4 - Writing Data to the File
For this lab exercise, you will reuse the functions from  Lab 6.3.

 Copy the code below:
```cpp
/**
 * @file   WRITE FILE NAME
 * @author WRITE STUDENT NAME
 * @brief  WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
 * @date   WRITE DATE TODAY
 *
 */
#include <iostream>
#include <fstream>
using namespace std;

// INCLUDE FUNCTION PROTOTYPES HERE


const double PI = 3.14159;

int main()
{
    //CREATE A FILE OUTPUT STREAM OBGECT
    
    //OPEN FILE areas.txt
    


    cout << "The program will calculate the area of "
            <<"the square and write it to the file\n";
    // Prompt user to enter a choice from the menu
    double len = 0.0;
    cout << "Enter length: ";
    cin >> len;
    cout << "Area of the square = " << findSquareArea(len)<<endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    

    cout << "The program will calculate the area of "
            << "the circle and write it to the file\n";
    // Prompt user for radius of circle
    double rad = 0.0;
    cout << "Enter radius: ";
    cin >> rad;
    cout << "Area of the circle = " << findCircleArea(rad)<<endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    

    cout << "The program will calculate the area of "
            <<"the triangle and write it to the file\n";
    // Prompt user for base and height of the right triangle
    double base = 0.0, height = 0.0;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    cout << "Area of the triangle = " << findTriangleArea(base, height)<<endl;
    //WRITE THE ABOVE OUTPUT TO THE FILE
    


    //CLOSE THE FILE
    
    return 0;
}
````
- [ ] Update the header comment with the correct information for this lab exercise.
- [ ] Copy the **findSquareArea**, **findCircleArea**, and **findTriangleArea** functions you wrote from Lab 6.3. Add function prototypes at the top of the program. 
- [ ] Complete the program by following the instructions in the capitalized comments.
- [ ] Compile and run the program. The program run should look something like this:
````
The program will calculate the area of the square and write it to the file
Enter length: 3
Area of the square = 9
The program will calculate the area of the circle and write it to the file
Enter radius: 5
Area of the circle = 78.5397
The program will calculate the area of the triangle and write it to the file
Enter base: 5
Enter height: 4
Area of the triangle = 10
````
- [ ] The program should create an area.txt file. Open this; it should look something like this
````
Area of the square = 9
Area of the circle = 78.5397
Area of the triangle = 10
````
- [ ] Present your work to the instructor. Prepare to answer questions.
- [ ] Commit your code with a message "*lab 6.4 completed*".
- [ ] Do a final push of your code back to the GitHub repo.

## Submitting Assignments
It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**

