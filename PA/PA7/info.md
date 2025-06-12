# PA7: One-Dimensional Array

### Learner Objectives
At the conclusion of this programming assignment, participants should be able to:
* Initialize, manipulate, and display one-dimensional arrays

### Acknowledgements
Content used in this assignment is based upon information in the following sources:
* This programming assignment is adapted from Dr. Gina Sprint's Computer Science I class at Gonzaga University

## Overview and Requirements

Write a program to simulate the [Letterbox](http://www.ukgameshows.com/ukgs/Letterbox) game show. For our program, the game is more simplified and is played as follows:
1. The program selects a random word for the user to guess.
2. The user guesses one letter at a time until either they guess the word, or they run out of guesses.

### Game Loops
Almost every game has a **game loop**. A **game loop** runs continuously during gameplay. Each turn of the loop,
* it **processes user input**, 
* **updates the game state**, and
* **renders the game**

It also tracks the passage of time to **control the rate of gameplay**. However, since we will not be doing any game animation, this doesn't really matter in this case.

```cpp
// game setup / initialization

// game Loop
bool isDone = false; // game over???
while (!isDone)
{
    // process input
    // update
    // render
}
```

## Program Details

- [ ] Apply the three file format.
    1. **main.cpp**
    2. **letterbox.cpp**
    3. **letterbox.h**
- [ ] Read words for the user to guess into an array of strings from a file. Create a text file **words.txt**. This file MUST contain at least 10 words but no more than 100 words, one word per line, and each word can have a **maximum of 12** characters. The program must work with any file named words.txt that has from 10 to 100 words (unless you are doing a challenge with hints). Here is a [website](https://randomwordgenerator.com/) that can generate random words. You can copy and paste the words in a text file.
- [ ] Select a random word from the array of strings to the word the user has to guess
- [ ] Maintain 2 `char` arrays:
    1. `availableLetters`: a `char` array of the available letters the user can choose their guess from. Initialize `availableLetters` as the lowercase alphabet. As the user guesses letters, replace the corresponding guessed letter with a space to denote the letter has already been guessed.
    2. `visibleLetters`: a `char` array of the not guessed letters in the word. Initialize `visibleLetters` to all dashes (`-`). As the user correctly guesses a letter, replace the corresponding dash(es) with the correct letter.
- [ ] The main game loop:
    1. Display information regarding the status of the game (`visibleLetters`, `availableLetters`, and the number of incorrect guesses remaining (the user gets 7 incorrect guesses)).
    2. Prompt the user to enter their guess. If the user tries to guess a letter they have already guessed, inform the user and re-prompt.
    3. Exit the loop or game ends, if the users completely guess the letters of the word or if the user runs out of incorrect guesses.If the user runs out of guesses, display the correct word.

> **Note**: relevant string methods you will likely need to use for this program are the following. First, lets assume you have a string variable, `string word = "Hello"`.
>
> * To get a character at index position `i`, you use `word.at(i)` or `word[i]`
> * To get the number of characters in the string, you use `word.size()` or `word.length()`. In this case, since `word = "Hello"`, `length()` will return `5`. 
    
### Functions to Define
In previous PAs, you are required to use the functions I have listed. **In this PA, you are free to decide which functions to define to solve this problem.** The first step is to draw a structure chart to help you understand the decomposition of functions for this program. Remember to start with the overall problem and break it down into inputs, computations, and outputs. Build your solution accordingly. You will be graded on your approach. Ask the instructor for help with this!

However, if you are still working on understanding functions, these might help you get started:
* `int loadDataToArray(string array[], int arraySize, ifstream& file)`
    * Reads each word from the input file stream `file` and stores each word in the array of strings `array`. Return the number of words read. This number can be used as an array size in the future.
    
* `string randomWord(const string array[], int arraySize)`
    * Assuming the array of strings `array` has English words in each element, this function will randomly select a word from this array and return that random word
    
* `void initializeAlphabet(char array[], int arraySize)`
    * In the instructions above, you are supposed to declare an array of characters in `main()` called `availableLetters`, which represents all the letters in the alphabet. This function will initialize that array with letters `'a'` as the first element, `'b'` as the second element, and so on.
    * Since there are 26 letters in the alphabet, you can simply use a `for` loop that repeats 26 times.
    * How do you assign each letter in the alphabet to each element in the array?
        * Recall that characters under the hood are represented by their ASCII value
        * `char letterA = 'a' + 0;  // letterA = 'a'`
        * `char letterB = 'a' + 1;  // letterB = 'b'`
        * `char letterC = 'a' + 2;  // letterC = 'c'` and
        * so on...
    
* `void initializeDashes(char array[], int arraySize)`
    * In the instructions above, you are supposed to declare an array of characters in `main()` called `visibleLetters`, which is used to keep track of what letters in the guess word have already been guessed correctly. However, this array needs to be initialized first with dashes. This is the role of the function to simply initialize this array with dashes (`-`).

* `void printArrayChar(const char array[], int size)`
    * This function can print an array of characters, where each element is printed one after another and prints a new line at the end.
    * **HINT**: This function can be used to print both `availableletters` and `visibleletters`, since both are an array of characters.

### Documentation
- [ ] You MUST write in-line comments to explain sections of your code to increase its readability. 
- [ ] You MUST also write function header comments to all your functions. Follow the format taught in the lecture and lab. Describe what the function does, a description of each parameter if needed, and a description of what the function returns if needed.

    ```cpp
    /**
     * @brief DESCRIBE WHAT FUNCTION DOES
     *
     * @param PARAMETER_NAME  DESCRIBE PARAMETER
     * @param PARAMETER_NAME  DESCRIBE PARAMETER
     * @return RETURN_TYPE    DESCRIBE WHAT FUNCTION RETURNS
     */
    ```

### Sample Run

```
The word to guess has 5 letters.

----- 
Available letters: abcdefghijklmnopqrstuvwxyz
7 incorrect guesses remaining.
Please enter your guess: 
s
s is not in the world. Too bad. 6 incorrect guesses remaining.

----- 
Available letters: abcdefghijklmnopqr tuvwxyz
6 incorrect guesses remaining.
Please enter your guess: 
e
Nice! e is in the word.

-e---
Available letters: abcd fghijklmnopqr tuvwxyz
6 incorrect guesses remaining.
Please enter your guess: 
r
r is not in the word. Too bad. 5 incorrect guesses remaining.

-e---
Available letters: abcd fghijklmnopq  tuvwxyz
5 incorrect guesses remaining.
Please enter your guess: 
r
r is not an available letter

-e---
Available letters: abcd fghijklmnopq  tuvwxyz
5 incorrect guesses remaining.
Please enter your guess: 
l
Nice! l is in the word.

-ell-
Available letters: abcd fghijk mnopq  tuvwxyz
5 incorrect guesses remaining.
Please enter your guess: 
h
Nice! h is in the word.

hell-
Available letters: abcd fg ijk mnopq  tuvwxyz
5 incorrect guesses remaining.
Please enter your guess: 
o
Nice! o is in the word.
Congrats, you guessed the word hello!
```

## Starter Codes
- [ ] You DO NOT have to use the functions and starter codes below for this programming assignment.

**main.cpp** You may or may not use the game loop provided below
```cpp
/**
 * @file   main.cpp
 * @author NAME_OF_STUDENT
 * @brief  This program simulates the game of 
 *         Letterbox. It is a guessing game where
 *         a user must guess a random word by
 *         asking the user to guess letter by letter.
 * @date   WRITE DATE TODAY
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//TODO: Include all other necessary header files
//TODO: Include the header file for letterbox
using namespace std;

int main()
{
    // seed our random function
    srand(time(0)); 

    // local constant variables
    const int NUM_WORDS = 100;    // maximum number of words read from words.txt
    const int MAX_LENGTH = 12;   // maximum length of the words in words.txt
    const int NUM_LETTERS = 26;  // number of letters in the alphabet

    string words[NUM_WORDS];             // use to store words from words.txt
    char availableLetters[NUM_LETTERS];  // the letters in the alphabet a-z stored in each element
    char visibleLetters[MAX_LENGTH];     // guess word placeholder, initially each element
                                         // are dashes but are slowly replaced with the correctly
                                         // guessed letter. NOTE: If there are only 5 letters in the
                                         // random guess word, during the game only the first 5 elements will 
                                         // only be used.

    // GAME SETUP AND INITIALIZATION
    
    // 1) Load strings from the file to an array of strings
    //    a) Create a file stream object
    //    b) Open the file that contains the words
    //    c) If the file is not opened successfully, exit the program
    //    d) call loadDataToArray() to get the data from the file into the array words

    // 2) Select a random word from an array of strings
    //    a) call randomWord() to get a random word and store the return value to a string variable

    // 3) Initialize available letter arrays
    //    a) call initializeAlphabet() and pass availableLetters as one of its argument  

    // 4) Initialize visible letters arrays
    //    a) call initializeDashes() and pass visibleLetters as one of its argument


    int lengthGuess;         // number of characters of the random guess word
    // 5) Get the length or size of the random guess word and assign it to lengthGuess
    
    // 6) Assume the random word to guess is "programming" then print to the screen followed by two newlines
    //
    // The word to guess has 11 letters.
    // END OF GAME SETUP
    
    
    // START OF GAME LOOP
    int maxNumGuesses = 7;   // maximum number of guesses allowed for each game
    while (maxNumGuesses > 0)
    {
        // 1) print to screen visibleLetters
        cout << "Available letters: ";
        // 2) print to screen availableLetters

        // 3) User Interactions
        //    a) Ask the user to guess a letter (letterGuess)
        //    b) input validation
        //       - is it a letter (if not a letter, ask user for another letter)
        //       - is the letter still available (if not available, ask user for another letter)

        // 4) Remove the letter from the availableLetter
        //    a) Replace the letter already guessed with space ' '

        // 5) Is the letter guessed by the user in the word being guessed
        //    a) if the letter is in the word, then update all elements in the visibleLetter
        //    b) if the letter is not in the word, subtract from maxNumGuesses

        // 6) if the user has successfully guessed all the letters
        //    a) break out of the loop
    }

    // END OF GAME LOOP

    return 0;
}
```

**letterbox.h**
```cpp
/**
 * @file   NAME_OF_FILE
 * @author NAME_OF_STUDENT
 * @brief  Letterbox Declaration File
 * @date   DATE_STARTED
 * 
 */
//TODO: Guard code start

//TODO: Include all necessary header files
using namespace std;

int loadDataToArray(string array[], int arraySize, ifstream& file);
string randomWord(const string array[], int arraySize);
void initializeAlphabet(char array[], int arraySize);
void initializeDashes(char array[], int arraySize);
void printArrayChar(const char array[], int size);

//TODO: Guard code end
```

**letterbox.cpp**
```cpp
/**
 * @file   NAME_OF_FILE
 * @author NAME_OF_STUDENT
 * @brief  Letterbox Implementation/Definition File
 * @date   DATE_STARTED
 * 
 */
//TODO: Include the header file for letter box

// Function definitions for Letterbox
```


## Extensions (Not Required)
- [ ] At the end of the game, the program should prompt the user to see if they want to play again. If they do, select a new word as the word to guess, but ensure this is a word the user has not yet tried to guess. Once the user has played the game with all of the words in the input file, inform the user and end the program (there are no more words to guess).
- [ ] In BBC's [Letterbox](https://www.youtube.com/watch?v=trjCmZUOp-0&ab_channel=BBC) game, the players were given a hint for the word they are guessing. The challenge is to add this feature to your game. For example, in the video, the guess word is **quasimodo**, the hint is: **fictional character**. There are many ways of implementing this.
- [ ] Instead of `string words[NUM_WORDS]` which is a fixed list, use a `vector` of strings instead which can dynamically grow as needed.

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
