# PA2: Intro to C++

### Learner Objectives
At the conclusion of this programming assignment, participants should be able to:
* Use variables and `cout` statements
* Use `cin` statement
* Compute values using arithmetic operators `+, -, *, /, %`
* `void` functions

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* Course Textbook, Chapter 2, Programming Challenges
* CodeStepByStep.com

## Overview and Requirements
For this programming assignment, we are going to write a simple C++ program. You will have to design and write a pseudocode for the problem, then write the C++ code based on the pseudocode.

## Programming Techniques
* Do not fall into the habit of writing the entire program then compiling and testing it. This method is much harder to debug.
* Instead, it is better to write the program by smaller chunks of code then compiling and testing it incrementally. This is easier to debug.
* Once you are confident that the code works after testing the program multiple times. Commit the code and push it to GitHub.

## Program Details

### Read and Understand the Three Problems

#### Problem 1
A particular brand of paint covers 340 square feet per gallon. Write a program to determine and report approximately how many gallons of paint will be needed to paint two coats on each side of a wooden fence that is 6 feet high and 100 feet long.

> *Hint*: Define variables and intialize with values, use `cout`, do some arithmetic

#### Problem 2
Write a program that will ask the user to input the height in inches and compute and display the height in feet/inches form.

> *Hint*: Try using the modulus and integer divide operations, define variables, use `cout`, use `cin` for user input, do some arithmetic

#### Problem 3
A soft drink company recently surveyed 20,200 of its customers and found that approximately 18 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 52 percent of them purchase citrus flavored energy drinks. Write a program that displays the following:
* The approximate number of customers in the survey who purchase one or more energy drinks per week.
* The approximate number of customers in the survey who purchase citrus flavored energy drinks.

> *Hint*: Define variables and initialize with values, use `cout`, do some arithmetic

#### Problem 4
Write a complete program that prints the following cumulative song as console output. **Use `void` functions** to capture the structure of the song and to **eliminate redundancy**. For example, NO complete line of output should be printed in two or more places in your code. 

You may start from scratch or continue working on what we have started in our lecture. The song lyrics in located in our [lecture notes](https://docs.google.com/document/d/1c6Bj943JNiI3LucuJpda5HSN7qja0O7T7GIc0xJdhYw/edit#heading=h.rfkyuqjzblu8).

### Apply the Steps Below for each Problem

#### Step 1 of 4: Implement Algorithm in C++


- [ ] Not required, but would suggest student to analyze the problem, determine the input/output of the program, and write a pseudocode.
- [ ] For each problem, create a C++ source file. Name your files as **problem1.cpp**, **problem2.cpp**, **problem3.cpp**, and **problem4.cpp**
- [ ] Each C++ source file should have a header comment at the beginning of the file using the following format,
    ```cpp
    /**
     * @file   <WRITE FILENAME>
     * @author <WRITE STUDENT NAME>
     * @brief  <WRITE DESCRIPTION ABOUT THE PROGRAM/FILE>
     * @date   <WRITE DATE TODAY>
     *
     */
    ```
    > **Note**: We will be basing our documentation style from [Doxygen](https://www.doxygen.nl/index.html). Doxygen is a tool for generating documentation as long as you follow their documentation style. Discussing on how to generate the documentation is outside the scope of this course. However, if you want to learn more about Doxygen, read this [article](https://visualstudiomagazine.com/articles/2013/04/01/documenting-c-apis-with-doxygen.aspx). 

    An example of a header comment,
    ```cpp
    /**
     * @file   problem1.cpp
     * @author John Doe
     * @brief  This program computes and displays the
     *         result of the problem.
     * @date   2020-08-19 or August 19, 2020
     *
     */
    ```
    > **IMPORTANT NOTE**: It is now expected that all programming assignments will include a header comment in each C++ source and header file.

- [ ] Based on the algorithm you wrote in pseudocode, implement it in C++ code. 
- [ ] Compile and test your code multiple times and run it with different test cases to ensure it works correctly.

#### Step 2 of 4: Provide In-Line Comments
- [ ] Write in-line comments to describe sections in your code to increase code readability


#### Step 3 of 4: Add, Commit and Push
- [ ] After completing each problem, add, commit and push code to GitHub
    ```
    $ git add problem1.cpp
    $ git commit -m "problem 1 completed"
    $ git push
    ```
    > **Important Note**: Replace **problem1.cpp** with the appropriate problem number you completed. This method only adds a specific file to the commit history. You can still use `git add -A` which adds everything. However, adding specific files is considered better practice.


#### Step 4 of 4: [After Completing All the Problems] Submit Assignment in Canvas
- [ ] Verify that the codes in GitHub is the latest codes you have in your computer. You can do this by visiting the PA's GitHub page and viewing each file.
- [ ] Submit the GitHub URL of this assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
