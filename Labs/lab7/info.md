# Lab7 Functions review for Midterm

## Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Writing specified functions
* Writing drivers to test functions

## Stubs and Drivers
Stubs and drivers are very helpful tools for testing and debugging programs that use functions.
They allow you to test the individual functions in a program in isolation.
### Stub
Dummy function in place of the actual function
Usually displays a message indicating it was called. May also display parameters
By replacing an actual function with a stub, you can concentrate your testing efforts on the parts of the program that call the function.
### Driver
A function that tests a function by calling it
If the function accepts any arguments, the driver passes test data. If the function returns a value, the driver displays the return value on the screen.
Allows you to see how the function performs in isolation from the rest of the program

## Lab 7.1 - Write and test functions
- [ ] Create the **main** function that will work as a driver for the functions below.
- [ ] Write a function called **computeSumOfOdd1** that accepts an integer called lastNumber. 
      Inside this function, construct a while loop that computes the sum of all odd numbers from 1 to lastNumber(if lastNumber is odd, include it). 
      This function will then return the sum of all odd numbers as an integer.
- [ ] Write a function, that is the same as **computeSumOfOdd1** but this time use a for loop instead of a while loop. Call it **computeSumOfOdd2**.
- [ ] Write a function called **sumOfNegatives**. This function has no parameters. Inside this function, construct a do-while loop that continues to prompt the user for a negative integer number 
     and sums up the numbers until a positive value is encountered. The positive value should NOT be included in the sum. 
     This function should then return the sum as an integer.
- [ ] Write a function **findMin** that accepts three double values **number1**, **number2**, and **number3** as input parameters. 
       The function should return the smallest number of the three.
- [ ] Present your work to the instructor. Prepare to answer questions.

## Submitting Assignments
It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
