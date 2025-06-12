# Lab 5: Looping

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Work with looping structures
* Use a counter, an accumulator, and an end sentinel
* Use do-while with a Menu

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Gaddis book lab materials

## Getting Started
1. Open terminal.

   If you haven't done this yet, configure your git "identity":
   ```
   $ git config --global user.name "FIRST_NAME LAST_NAME"
   $ git config --global user.email "YOUR_@COLLEGE_EMAIL"
   ```
2. Make sure your current working directory is `~/cs150/lab`. Navigate to this directory if needed.
3. Clone this repository using `git clone <REPO_URL> lab05`. This should create a folder `lab05` under `~/cs150/lab`.
4. Change directory into `lab05`
5. Open Visual Studio Code by typing in the terminal `code .`

## Lab 5.1 - Working with Looping Structures

- [ ] Create a new file `lab5_1.cpp` and copy the source code below.
   ```cpp
   /**
    * @file   WRITE FILE NAME
    * @author WRITE STUDENT NAME
    * @brief  Working with looping structures.
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
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
       cout << "\nActivity 1 \n==========\n";
   }

   void activity1()
   {
       activityTitle(1);

       // Change the following do-while loop to a while loop. 
       int inputNum = 0;
       do
       {
           cout << "Enter a number (or 0 to quit): ";
           cin  >> inputNum;
       } while (inputNum != 0);
   }

   void activity2()
   {
       activityTitle(2);
       // Change the following while loop to a do-while loop. 
       char doAgain = 'y';
       while (doAgain == 'Y' || doAgain == 'y')
       {
           cout << "Do you want to loop again? (y/n) ";
           cin  >> doAgain;
       } 
   }

   void activity3()
   {
       activityTitle(3);
       // Change the following while loop to a for loop. 
       int count = 0;
       while (count++ < 5)
       {
           cout << "Count is " << count << endl;
       }
   }

   void activity4()
   {
       activityTitle(4);
       // Change the following for loop to a while loop. 
       for (int x = 5; x > 0; --x)
       {
           cout << x << " seconds to go. \n";
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
       for (int i = 1; i <= 3; ++i)
       {
           cout << '$';
           for (int j = 1; j <= 5; ++j)
           {
               cout << '*';
           }
       }
       cout << endl;
   }
   ```
- [ ] Update the header comment with the correct information.
- [ ] Save and compile the code in the terminal. The name of the executable file should be `Lab5_1`. Recall two things about compiling the code in the terminal:
   1. Make sure you are inside the folder where the C++ source file is located.
   2. Use the compile command `g++ -Wall <.cpp FILES> -o <NAME OF EXECUTABLE FILE>`
- [ ] Once the program compiles with no errors. Run/Execute the program in the terminal using this general format `./<NAME OF EXECUTABLE FILE>`. 
   * When **Activity 1** asks for inputs use the following inputs:
     ```
     Enter a number (or 0 to quit): 5
     Enter a number (or 0 to quit): 2
     Enter a number (or 0 to quit): 0
     ```
   * When **Activity 2** asks for input use the following inputs:
     ```
     Do you want to loop again? (y/n) y
     Do you want to loop again? (y/n) Y
     Do you want to loop again? (y/n) n
     ```

- [ ] Make all the modifications requested in the source code. Then recompile and rerun it. If you have done everything correctly, you should get the same results as before for **Activities 1-4**. You should also get the following output for **Activity 5**:
   ```
   $****
   $****
   $****
   ```
- [ ] Commit your code with a message "*lab 5.1 completed*". Recall the terminal commands:
   1. `git add -A`
   2. `git commit -m "COMMIT MESSAGE"`
- [ ] Push your code back to the GitHub repo then continue with **Lab 5.2**.

## Lab 5.2 - Using a Counter, an Accumulator, and an End Sentinel
- [ ] Create a `lab5_2.cpp` file  and copy the source code below.
   ```cpp 
   /**
    * @file   WRITE FILE NAME
    * @author WRITE STUDENT NAME
    * @brief  This program finds the average number of boxes of cookies 
    *         sold by the children in a particular scout troop. 
    *         It illustrates the use of a counter, an accumulator, 
    *         and an end sentinel.
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
   using namespace std;

   void displayTitle();
   void displayResult(int nSellers, int nBoxes);

   int main()
   { 
       displayTitle();

       // WRITE CODE TO INITIALIZE THE totalBoxes ACCUMLATOR TO 0,
       // THE numSeller COUNTER TO 0 AND THE numBoxes to 0.

       int totalBoxes,  // Accumulates total boxes sold by the entire troop
           numSeller,   // Counts the number of children selling cookies
           numBoxes;    // Number of boxes of cookies sold by one child

       // WRITE CODE TO START A while LOOP THAT LOOPS WHILE numBoxes
       // IS NOT EQUAL TO -1, THE SENTINEL VALUE.
       {
           // WRITE CODE TO ADD numBoxes TO THE totalBoxes ACCUMULATOR.
           // WRITE CODE TO ADD 1 TO THE numSeller COUNTER.

           cout << "Enter number of boxes of cookies sold by seller " << numSeller
                << " (or -1 to quit): ";
           cin >> numBoxes;
       }
       // WHEN THE LOOP IS EXITED, THE VALUE STORED IN THE numSeller COUNTER
       // WILL BE ONE MORE THAN THE ACTUAL NUMBER OF SELLERS. SO WRITE CODE
       // TO ADJUST IT TO THE ACTUAL NUMBER OF SELLERS.

       // WRITE CODE TO CALL displayResult() FUNCTION AND 
       // PASS numSeller AND totalBoxes INTO THE FUNCTION

       return 0;
   }

   /**
    * @brief Displays title of the program
    */
   void displayTitle()
   {
       cout << "             **** Cookie Sales Information **** \n\n";
   }

   /**
    * @brief Displays the number of sellers and average number
    *        of boxes sold per seller, otherwise if there are no sellers,
    *        displays "No boxes were sold"
    *
    * @param nSellers  number of sellers
    * @param nBoxes    total boxes sold
    */
   void displayResult(int nSellers, int nBoxes)
   {
       if (nSellers == 0)
       {
           cout << "\nNo boxes were sold.\n";
       }
       else
       {
           double averageBoxes = 0.0;  // Average number of boxes sold per child

           // WRITE CODE TO ASSIGN averageBoxes THE COMPUTED AVERAGE NUMBER 
           // OF BOXES SOLD PER SELLER.

           // WRITE CODE TO PRINT OUT THE NUMBER OF SELLERS AND AVERAGE NUMBER
           // OF BOXES SOLD PER SELLER.
           // Output MUST look like this: 
           // The average number of boxes sold by the 5 sellers was 39.8.
       }
   }
   ```
- [ ] Update the header comment with the correct information.
- [ ] Read through the code and the instructions in order to understand the steps that must be carried out to correctly count the number of sellers and accumulate the total number of cookie boxes sold. Notice that `if (numSeller == 0)` is used to handle the special case where -1 is the very first user input, indicating there are no sellers and no boxes sold. This must be handled as a special case to avoid a *divide by zero* when the number of sellers equals zero.
- [ ] Complete the program by following the instructions in the capitalized comments. Compile the program and the name of the executable file should be `Lab5_2`. Once it compiles with no errors, test it using the following test cases. You should get the results shown.
   ```
   Run  Inputs  Expected Output
    1    -1     No boxes were sold
    2    41
         33
         19
         64
         42
         -1     The average number of boxes sold by the 5 sellers was 39.8.
    3    10
        -10
         24
         -1     The average number of boxes sold by the 3 sellers was 8.
   ```

- [ ] Notice that the sample runs 1 and 2 produce desirable results, but run 3 does not. This is because the program does not validate the input data. Only non-negative numbers and -1 (to quit) should be allowed.  Below is the part of the code where user enters a value for `numBoxes`. Enclosed this inside a `while` or `do-while` loop to validate that the input for the number of boxes sold is -1 or greater. 
   ```cpp
   cout << "Enter number of boxes of cookies sold by seller " << numSeller
        << " (or -1 to quit): ";
   cin >> numBoxes;
   ```
   Then re-test your program with the same three test cases.  The results of test cases 1 and 2 should be the same as before.  However, now when test case 3 is run, the -10 input should be rejected and  the program should generate the following output:
   ```
   The average number of boxes sold by the 2 sellers was 17.
   ```
- [ ] Commit your code with a message "*lab 5.2 completed*".
- [ ] Push your code back to the GitHub repo then continue with **Lab 5.3**.

## Lab 5.3 - Complete Program
- [ ] Create a `lab5_3.cpp` file and copy the source code below.
   ```cpp 
   /**
    * @file   WRITE FILE NAME
    * @author WRITE STUDENT NAME
    * @brief  This program displays a series of terms and computes its sum.
    * @date   WRITE DATE TODAY
    *
    */
   #include <iostream>
   #include <cmath>
   #include <string>
   using namespace std;

   void displayName(string name);
   void displaySeries(int numberOfTerms);

   int main()
   {
       string studentName = "PUT YOUR NAME HERE";
       displayName(studentName);
       
       cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n\n";
   
       int nTerms = 0;   // Number of terms
       cout << "How many terms (2 - 10)? ";
       cin >> nTerms;
       
       displaySeries(nTerms);

       return 0;
   }

   /**
    * @brief Display name to the screen.
    *
    * @param name  name of student
    */
   void displayName(string name)
   {
       // WRITE THE CODE TO PRINT name TO SCREEN FOLLOWED BY
       // A NEW LINE
   }

   /**
    * @brief Displays a series of terms and computes its sum.
    *
    * @param numberOfTerms   number of terms in the series
    */
   void displaySeries(int numberOfTerms)
   {
       double sum = 0.0;      // Accumulator that adds up all terms in the series

       // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
       {
           // WRITE THE CODE TO PRINT THIS TERM.
           // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
           // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.

           // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
       }

       // WRITE A LINE OF CODE TO PRINT THE SUM.
   }
   ```
- [ ] Update the header comment with the correct information.
- [ ] Design and implement a C++ program so that it generates and displays the terms and the sum of this series up through the nth term, where the user enters a value for *n* between 2 and 10.
   - [ ] Implement `void displaySeries(int numberOfTerms)`
   - [ ] If the `numberOfTerms` has a value of `5`, the program will display the terms and compute and display the summation of the following terms:
      <pre>
      1/2<sup>1</sup> + 1/2<sup>2</sup> + 1/2<sup>3</sup> + 1/2<sup>4</sup> + 1/2<sup>5</sup>  
      </pre>
   
   - [ ] Your program if working correctly should have the following outputs below:

      **Sample Run 1:**
      ```
      Ekaterina Miller

      This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n
      How many terms (2 - 10)? 5
      1/2 + 1/4 + 1/8 + 1/16 + 1/32 = 0.96875
      ```

      **Sample Run 2:**
      ```
      Ekaterina Miller

      This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n
      How many terms (2 - 10)? 6
      1/2 + 1/4 + 1/8 + 1/16 + 1/32 + 1/64 = 0.984375
      ```
   
- [ ] Once your program is working correctly, add a loop to the program that asks the user if he or she wishes to compute another series, and which continues to iterate so long as the user enters `'y'` or `'Y'`.  You will need additional program logic and a new variable to do this in `main()`

- [ ] Test your program with the following inputs before entering `'y'` to quit.:
   ```
   How many terms (2 - 10)? 5
   ...
   How many terms (2 - 10)? 6
   ...
   How many terms (2 - 10)? 8
   ...
   How many terms (2 - 10)? 10
   ```

   **NOTE**: If your program is working correctly, all the sums will be less than 1.  If they are not, you have a logic error that you need to find and fix.

- [ ] Validate user input for the final term so that user can only input values `2 to 10`. If user enters an invalid value, prompt user that value is invalid and ask user to enter a new value for the final term.
- [ ] Test your program with invalid and valid inputs to check it works properly.

- [ ] Present your work to the instructor after finishing this part of the lab. Prepare to answer questions.
- [ ] Commit your code with a message "*lab 5.3 completed*".
- [ ] Do a final push of your code back to the GitHub repo.

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
