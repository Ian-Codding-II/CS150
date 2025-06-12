# Lab 8: Functions II

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Use Value and Reference Parameters
* Use the Three File Structure when creating a C++ program

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Gaddis book lab materials

## Getting Started
1. Create three folders inside `~/cs150/Lab/Lab8` called
    1. `labactivity8_1`
    2. `labactivity8_3`
    3. `labactivity8_4`
5. Open Visual Studio Code by typing in the terminal `code .`

## Lab 8.1 - Using Value and Reference Parameters

1. In Visual Studio Code under `labactivity8_1` folder, create a new file `main.cpp`. Open the C++ source file `main.cpp` in the text editor and copy the source code below.
   ```cpp
   /**
    * @file   WRITE FILE NAME
    * @author WRITE STUDENT NAME(S)
    * @brief  Using value and reference parameters. This program
    *         uses a function to swap the values in two variables.
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
   using namespace std;

   // Function prototype
   void swapNums(int number1, int number2);

   int main()
   {
       int num1 = 5,
           num2 = 7;

       // Print the two variable values
       cout << "In main the two numbers are "
            << num1 << " and " << num2 << endl;

       // Call a function to swap the values stored
       // in the two variables
       swapNums(num1, num2);

       // Print the same two variable values again
       cout << "Back in main again the two numbers are "
            << num1 << " and " << num2 << endl;

       return 0;
   }

   /**
    * @brief WRITE DESCRIPTION OF THE FUNCTION
    * 
    * @param number1 DESCRIPTION
    * @param number2 DESCRIPTION
    */
   void swapNums(int number1, int number2)
   {
       // Parameter a receives num1 and parameter b receives num2
       // Swap the values that came into parameters a and b
       int temp = number1;
       number1 = number2;
       number2 = temp;

       // Print the swapped values
       cout << "In swapNums, after swapping, the two numbers are "
            << number1 << " and " << number2 << endl;
   }
   ```
2. Update the header comment with the correct information.

3. Read the source code, paying special attention to the `swapNums` parameters. When the program is run do you think it will correctly swap the two numbers? Compile and run the program to find out.

Explain what happened. It swapped the numbers in the function but did not return any values so the numbers won’t get swapped in main.

4. Change the two swapNums parameters to be reference variables. Section 6.13 of your text shows how to do this. You will need to make the change on both the function header and the function prototype. Nothing will need to change in the function call. After making this change, recompile and rerun the program. If you have done this correctly, you should get the following output.
````
In main the two numbers are 5 and 7
In swapNums, after swapping, the two numbers are 7 and 5
Back in main again the two numbers are 7 and 5
````
Explain what happened this time. The function was passed references to the variables in `main`. This allows the function to change the contents of the variables in main as it is working on the same variable address in memory.

5. Update the function header comments of swapNums.

6. Commit your code with a message "*lab 8.1 completed*". Recall the terminal commands:
    1. `git add -A`
    2. `git commit -m "COMMIT MESSAGE"`
7. Push your code back to the GitHub repo then continue with **Lab 8.2**.

## Lab 8.2 - Three File Structure 1

1. Continue working with the previous C++ project in **Lab 8.1**. Create a new file under the `labactivity8_1` called `functions.h`. Inside this file, you will have to write the guard code, to ensure the code inside this file is only included once. The guard code is demonstrated below. Copy the code below and paste it inside `functions.h`.
   ```cpp 
   /**
    * @file   functions.h
    * @author WRITE STUDENT NAME(S)
    * @brief  Declaration file
    * @date   WRITE DATE TODAY
    *
    */
   #ifndef FUNCTIONS_H  // GUARD CODE
   #define FUNCTIONS_H  // GUARD CODE

   // INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
   using namespace std;

   // PUT FUNCTION PROTOTYPES HERE

   #endif // GUARD CODE
   ```
2. Update the header comment with the correct information.
3. From `main.cpp`, copy and remove the function prototypes, then paste the function prototypes in `functions.h`.
4. Back in `main.cpp`, just above `using namespace std`, you now need to include `functions.h`. Observe the code below. 
   ```cpp
   #include <iostream>
   #include "functions.h"
   using namespace std;
   ```

5. Create another new file under the `labactivity8_1` called `functions.cpp`. This file is where the function definitions are going to be placed. Note, that the first line of code in this file is to include `functions.h`.
   ```cpp
   /**
    * @file   functions.cpp
    * @author WRITE STUDENT NAME(S)
    * @brief  Implementation/Definition file
    * @date   WRITE DATE TODAY
    *
    */
   #include "functions.h"

   // PUT FUNCTION DEFINTIONS HERE
   ```
   
6. Update the header comment with the correct information.
7. From `main.cpp`, copy and remove the function definitions, then paste the function definitions in `functions.cpp`. Observe that you are using `cout` inside the function, which means you need to include `iostream`. The right place to include `iostream` will be inside `functions.h`.
7. Compile the program and the name of the executable file should be `Lab7_2`. 
   * Use the compile command `g++ -Wall main.cpp functions.cpp -o Lab8_2`
8. Run the program. The program should give you the same result as in **Lab 8.1**. Understand how this code organization could help in the maintainability of your code. You will see the importance of this type of code organization when you have lots of functions in your C++ project.
9. Commit your code with the message "*lab 8.2 completed*".
10. Push your code back to the GitHub repo then continue with **Lab 8.3**.

## Lab 8.3 - Three File Structure 2
1. Inside the `labactivity7_3` folder, create a `main.cpp` file. Open the C++ source file `main.cpp` in the text editor and copy the source code below. After copying, organize the code using the concept of the three file structure you learned from the previous activity. I suggest creating two more files called `areas.cpp` and `areas.h` under `labactivity7_3` folder.
   ```cpp 
   /**
    * @file   WRITE FILE NAME
    * @author WRITE STUDENT NAME(S)
    * @brief  This program calculate the area of shapes
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
   using namespace std;

   const double PI = 3.14159;
   
   int getChoice(int min, int max);
   void displayMenu();
   double findSquareArea(double length);
   double findCircleArea(double radius);
   double findTriangleArea(double base, double height);

   int main()
   {
       int choice = 0;
       while (choice != 4)
       {
           displayMenu();
           choice = getChoice(1, 4);

           if (choice == 1)
           {
               double len = 0.0;
               cout << "Enter length: ";
               cin >> len;
               cout << "Area = " << findSquareArea(len) << endl;
           }
           else if (choice == 2)
           {
               double rad = 0.0;
               cout << "Enter radius: ";
               cin >> rad;
               cout << "Area = " << findCircleArea(rad) << endl;
           }
           else if (choice == 3)
           {
               double base = 0.0, height = 0.0;
               cout << "Enter base: ";
               cin >> base;
               cout << "Enter height: ";
               cin >> height;
               cout << "Area = " << findTriangleArea(base, height) << endl;
           }
       }
       return 0;
   }

   /**
    * @brief This function displays choices to the user
    */
   void displayMenu()
   {
       cout << "Program to calculate areas of objects\n"
            << "        1 -- square\n"
            << "        2 -- circle\n"
            << "        3 -- right triangle\n"
            << "        4 -- quit\n\n";
   }

   /**
    * @brief This function prompts a user for a input
    *        between min to max and validates it to ensure
    *        a valid input has been made. Input is then
    *        returned as an integer.
    *
    * @param  min  minimum user input
    * @param  max  maximum user input
    * @return int  choice as an integer between the
    *              values of min and max
    */
   int getChoice(int min, int max)
   {
       int input;

       // Get and validate the input
       while (1)
       {
           cout << "Pick [" << min << "-" << max << "] from the menu: ";
           cin >> input;
           
           if (input < min || input > max)
           {
               cout << "Invalid input. ";
           }
           else
           {
               return input;
           }
       }
   }

   /**
    * @brief This function prompts the user for dimensions
    *        and calculates the area of a square
    *
    * @param  length  length of the square
    * @return double  area of the square
    */
   double findSquareArea(double length)
   {
       return length * length;
   }

   /**
    * @brief This function prompts the user for dimensions
    *        and calculates the area of a circle
    *
    * @param  radius  radius of the circle
    * @return double  area of the circle
    */
   double findCircleArea(double radius)
   {
       return PI * radius * radius;
   }

   /**
    * @brief This function prompts the user for dimensions
    *        and calculates the area of a triangle
    *
    * @param  base    base of the triangle
    * @param  height  height of the triangle
    * @return double  area of the triangle
    */
   double findTriangleArea(double base, double height)
   {
       return 0.5 * base * height;
   }
   ```
2. Update the header comment with the correct information. And make sure each file has a file header comment.
3. Compile and execute your code to ensure that it works.
4. Present your work to the instructor after finishing this part of the lab. Prepare to answer questions.
5. Commit your code with a message "*lab 8.3 completed*".
6. Push your code back to the GitHub repo then continue with **Lab 8.4**.

## Lab 8.4 - Complete Program

1. Inside the `labactivity7_4` folder, create three files: `main.cpp`, `conversion.cpp` and `conversion.h`. Copy the source codes below to their corresponding files. The starter codes below contain just a program shell in which you will write the programming statements needed to complete the program described below. 

   **main.cpp**
   ```cpp
   /**
    * @file   main.cpp
    * @author WRITE STUDENT NAME(S)
    * @brief  This menu-driven program lets the user convert pounds
    *         to kilograms and kilograms to pounds. 
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
   // INCLUDE USER CREATED HEADER FILE
   using namespace std;

   int main()
   {
       // DECLARE ANY VARIABLES MAIN USES HERE.

       // WRITE THE CODE HERE TO CARRY OUT THE STEPS
       // REQUIRED BY THE PROGRAM SPECIFICATIONS.

       return 0;
   }
   ```

   **conversion.h**
   ```cpp
   /**
    * @file   conversion.h
    * @author WRITE STUDENT NAME(S)
    * @brief  Conversion declaration file
    * @date   WRITE DATE TODAY
    *
    */
   // START GUARD CODES


   // Function prototypes
   // WRITE PROTOTYPES FOR THE displayMenu, getChoice,
   // kilosToPounds and poundsToKilos FUNCTIONS HERE.


   // END GUARD CODE
   ```
   
   **conversion.cpp**
   ```cpp
   /**
    * @file   conversion.cpp
    * @author WRITE STUDENT NAME(S)
    * @brief  Conversion definition file
    * @date   WRITE DATE TODAY
    *
    */
   // INCLUDE USER CREATED HEADER FILE


   /**
    * @brief WRITE DESCRIPTION OF displayMenu FUNCTION
    */
   // WRITE THE displayMenu FUNCTION HERE.
   // THIS void FUNCTION DISPLAYS THE MENU CHOICES
   //  1. Convert kilograms to pounds
   //  2. Convert pounds to kilograms
   //  3. Quit

   /**
    * @brief getChoice function
    */
   // THIS IS THE SAME FUNCTION YOU WROTE IN THE PREVIOUS LAB
   // AND IS ALSO AVAILABLE IN TODAYS LAB IN LAB 7.3
   // JUST FIND IT AND PASTE IT HERE.

   /**
    * @brief WRITE DESCRIPTION OF kilosToPounds FUNCTION
    */
   // WRITE THE kilosToPounds FUNCTION HERE.
   // IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
   // AND RETURN THE EQUIVALENT NUMBER OF POUNDS.

   /**
    * @brief WRITE DESCRIPTION OF poundsToKilos FUNCTION
    */
   // WRITE THE poundsToKilos FUNCTION HERE.
   // IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
   // AND RETURN THE EQUIVALENT NUMBER OF KILOS.
   ```

2. Update the file header comments with the correct information for this lab exercise for all three files.
3. Design and implement a modular, menu-driven program that converts kilograms to pounds and pounds to kilograms. 1 kilogram = 2.2 pounds.

   1. The program should display a menu,
   2. accept and validate a user menu choice,
   3. get the amount of weight to be converted,
   4. call the appropriate function to do the conversion, and
   5. then print the returned result.
   6. The code should continue iterating to allow additional conversions until the user enters the menu choice to quit. 

4. When the program runs it MUST look like the sample run shown here.

   **Sample Run**
   ```
   1. Convert kilograms to pounds
   2. Convert pounds to kilograms
   3. Quit
   Pick [1-3] from the menu: 1

   Weight to be converted: 4
   4 kilograms = 8.8 pounds.

   1. Convert kilograms to pounds
   2. Convert pounds to kilograms
   3. Quit
   Pick [1-3] from the menu: 2

   Weight to be converted: 10
   10 pounds = 4.54545 kilograms.

   1. Convert kilograms to pounds
   2. Convert pounds to kilograms
   3. Quit
   Pick [1-3] from the menu: 3
   ```

5. Once your program is written and compiles with no errors, thoroughly test it.
7. Present your work to the instructor after finishing this part of the lab. Prepare to answer questions.
8. Commit your code with the message "*lab 8.4 completed*".
9. Do a final push of your code back to the GitHub repo.

## Submitting Assignments
* It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
