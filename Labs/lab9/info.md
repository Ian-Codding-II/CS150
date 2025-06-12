# Lab 9: Arrays

### Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Use arrays to convert decimal numbers into roman numerals
* Reading data from a file into an array
* Displaying multi-dimensional arrays to the screen

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
3. Clone this repository using `git clone REPO_URL Lab9`. This should create a folder `lab09` under `~/cs150/Lab`.
4. Change directory into `lab08`. Create two folders inside `~/cs150/Lab/Lab9` called
    1. `RomanNumeralConverter`
    2. `BaseballChampions`
5. Open Visual Studio Code by typing in the terminal `code .`

## Lab 8.1 - Roman Numeral Converter
- [ ] In Visual Studio Code under `RomanNumeralConverter` folder, create three files `main.cpp`, `convert.h`, and `convert.cpp`. A starter code has been provided for `convert.h` only. You will have to supply the codes that goes in `main.cpp` and `convert.cpp`.

   ```cpp 
   /**
    * @file   convert.h
    * @brief  Declaration file
    * @author WRITE STUDENT NAME
    * @date   WRITE DATE TODAY
    *
    */
   // START GUARD CODES

   // INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
   using namespace std;
   
   string convertToRomanNumeral(int decimalNumber);

   // END GUARD CODE
   ```

- [ ] Create a program that displays the Roman numeral equivalent of any decimal number between 1 and 20 that the user enters. The Roman numerals should be stored in an array of strings, and the decimal number that the user enters should be used to locate the array element holding the Roman numeral equivalent. The program should have a loop that allows the user to continue entering numbers until the user enters an end sentinel value of 0.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://multiplicationchart.net/wp-content/uploads/2019/12/Roman-Numbers-1-to-20.gif" width="350px" />

- [ ] Breakdown:
   - [ ] In the `main()`, will have the loop that allows the user to continue entering numbers until the user enters an end sentinel value of 0. Also, as the user enters a number, user will be prompted with the equivalent roman numeral value of the number, if and only if the number entered is a valid value.
   - [ ]  Use the function `convertToRomanNumeral(int decimalNumber)`. Inside the function declare the array of strings of roman numerals. In this function, the parameter `decimalNumber` is used to locate the array element holding the roman numeral equivalent and the function returns the roman numeral value.

   - [ ] Execute, and test your code multiple times to ensure that there are no bugs in the program. Debug and recompile as needed.

   - [ ] In regards to the array of strings of roman numerals declared inside `convertToRomanNumeral()` --- as a programmer, why is it worth considering in declaring this array of strings as a global constant variable versus as a local constant variable? Modify the code if you determine if one is better than the other.
   - [ ] Example of output
````
Enter the number from 1 to 20 (or 0 to quit): 50
Wrong number
Enter the number from 1 to 20 (or 0 to quit): 20
20 equivalent to XX in the Roman numeral

Enter the number from 1 to 20 (or 0 to quit): 4
4 equivalent to IV in the Roman numeral

Enter the number from 1 to 20 (or 0 to quit): 0
Goodbye...
````
- [ ] Commit your code with the message "*roman numeral converter completed*". Recall the terminal commands:
    1. `git add -A`
    2. `git commit -m "COMMIT MESSAGE"`
- [ ] Push your code back to the GitHub repo then continue with **Lab 9.2**.

## Lab 8.2 - Baseball Champions
- [ ] In Visual Studio Code under `BaseballChampions` folder, create three files `main.cpp`, `baseball.h`, and `baseball.cpp`. A starter code has been provided only for `main.cpp` and `baseball.h`. You will have to determine what goes inside `baseball.cpp`
   ```cpp 
   /**
    * @file   main.cpp
    * @brief  WRITE BRIEF DESCRIPTION ABOUT THE PROGRAM
    * @author WRITE STUDENT NAME
    * @date   WRITE DATE TODAY
    *
    */
   // INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
   using namespace std;
   
   int main()
   {
       ifstream teamFile;
       teamFile.open("Teams.txt");
       // 1. Check if file opened successfully, if not exit the program
       
       // 2a. Declare an array of strings to store data for baseball teams
       // 2b. Load data from teamFile to an array by calling loadTeamsFromFileToArray
       // 3. Close the file stream
       
       ifstream winnersFile;
       winnersFile.open("WorldSeriesWinners.txt")
       // 1. Check if file opened successfully, if not exit the program
       
       // 2a. Declare an array of strings to store data for world series winners
       // 2. Load data from winnersFile to an array by calling loadWinnersFromFileToArray
       // 3. Close the file stream
       
       // Read the instructions on what else you need to finish this program
       
       return 0;
   }
   ```
   
   ```cpp 
   /**
    * @file   baseball.h
    * @brief  Declaration file
    * @author WRITE STUDENT NAME
    * @date   WRITE DATE TODAY
    *
    */
   // START GUARD CODES

   // INCLUDE THE HEADER FILES NEEDED FOR THE FUNCTIONS TO WORK
   using namespace std;
   
   void loadTeamsFromFileToArray(ifstream &file, string array[], int size);
   void loadWinnersFromFileToArray(ifstream &file, string array[], int size);

   // END GUARD CODE
   ```
   
- [ ] This lab activity uses two files:
    1. **Teams.txt**
        * This file contains an alphabetical list of a number of Major League Baseball teams that have won the World Series at least once.
    2. **WorldSeriesWinners.txt**
        * This file contains a chronological list of World Series' winning teams from 1950 through 2014. The first line in the file is the name of the team that won in 1950, and the last line is the name of the team that won in 2014.  (Note that the World Series was not played in 1994) .

- [ ] Breakdown:
    - [ ] Complete the program so that it reads the contents of each of the two files into an array. 
        1. Load data from **Teams.txt** to an array of strings called `teams`
        2. Load data from **WorldSeriesWinners.txt** to an array of strings called `winners`
        3. Do you need two functions to do this or can you use the same? Fix the code.
    - [ ] It should then display each element of the `teams` array on the screen separated by a newline.
    - [ ] Prompt the user to enter the name of one of the teams. 
    - [ ] When the user enters a team name, the program should display the number of times that the team has won the World Series in the time period from 1950 through 2014.
    - [ ] Allow the user to enter another name of a team.
    - [ ] If the user enters the team's name that does not exist, let him/her know.
    - [ ] Program exits if the user enters the word **quit**.

- [ ] Execute, and test your code multiple times to ensure that there are no bugs in the program. Debug and recompile as needed.
- [ ] Present your work to the instructor after finishing this part of the lab. Prepare to answer questions.
- [ ] Commit your code with the message "*Lab8.2 is done*".

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
