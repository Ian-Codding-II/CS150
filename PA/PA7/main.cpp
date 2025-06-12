/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief This program simulates the game of
 *         Letterbox. It is a guessing game where
 *         a user must guess a random word by
 *         asking the user to guess letter by letter.
 * @version 0.1
 * @date 2025-03-17
 *
 * @copyright Copyright (c) 2025
 *
 */
// TODO: Include all other necessary header files
// TODO: Include the header file for letterbox
#include "letterbox.h"
using namespace std;

int main()
{
    // seed our random function
    srand(time(NULL));

    // local constant variables
    bool compare;               // This is to compare the random word to the viable letters
    bool letter;                // This is to compare the users input to the random word
    char goAgain;               // This is what I use as there option to go again
    const int MAX_LENGTH = 12;  // maximum length of the words in words.txt
    const int NUM_LETTERS = 26; // number of letters in the alphabet
    const int NUM_WORDS = 100;  // maximum number of words read from words.txt
    int indexForDeffOfW;        // This will be the reference index for the array deffOfWords
    string randWord;            // the random word
    string words[NUM_WORDS];    // use to store words from words.txt
    vector<string> vectWords;   // I copy the array words into this vector.
    string deffOfWords[NUM_WORDS];
    char availableLetters[NUM_LETTERS]; // the letters in the alphabet a-z stored in each element
    char visibleLetters[MAX_LENGTH];    // guess word placeholder, initially each element
                                        // are dashes but are slowly replaced with the correctly
                                        // guessed letter. NOTE: If there are only 5 letters in the
                                        // random guess word, during the game only the first 5 elements will
                                        // only be used.

    // GAME SETUP AND INITIALIZATION

    // 1) Load strings from the file to an array of strings
    //    a) Create a file stream object
    ifstream myWords;
    //    b) Open the file that contains the words
    myWords.open("words.txt");
    //    c) If the file is not opened successfully, exit the program
    if (myWords.fail())
    {
        cout << "Error opening file.\n";
        // Terminate the program
        exit(1); // include <cstdlib>
    }
    //    d) call loadDataToArray() to get the data from the file into the array words
    int arraySize = loadDataToArray(words, deffOfWords, NUM_WORDS, myWords);
    // This for loop will copy everything in words and put it in vectWords : ) Thanks
    for (int i = 0; i < arraySize; i++)
    {
        vectWords.push_back(words[i]);
    }

    do
    {
        // 2) Select a random word from an array of strings
        //    a) call randomWord() to get a random word and store the return value to a string variable
        randWord = randomWord(vectWords, indexForDeffOfW);
        // cout << "\n" << randWord << "\n";    //  test
        vectWords[indexForDeffOfW] = "";
        //  3) Initialize available letter arrays
        //     a) call initializeAlphabet() and pass availableLetters as one of its argument
        initializeAlphabet(availableLetters, NUM_LETTERS);
        // 4) Initialize visible letters arrays
        //    a) call initializeDashes() and pass visibleLetters as one of its argument
        initializeDashes(visibleLetters, MAX_LENGTH);
        // 5) Get the length or size of the random guess word and assign it to lengthGuess
        int lengthGuess = randWord.length(); // number of characters of the random guess word.
        // 6) Assume the random word to guess is "programming" then print to the screen followed by two newlines
        //
        // The word to guess has 11 letters.
        // END OF GAME SETUP

        // START OF GAME LOOP*/
        int maxNumGuesses = 7; // maximum number of guesses allowed for each game
        string stGuess = " ";  // this is a string that will be changed to what user enters
        char chGuess = ' ';    // this will be the actuall value of the users input for my functions
        cout << "\n\nThe hint for this word is\n"
             << deffOfWords[indexForDeffOfW] << "\n";
        cout << "The word to guess has " << lengthGuess << " letters.\n\n";
        while (maxNumGuesses > 0)
        {
            // 1) print to screen visibleLetters
            for (int i = 0; i < lengthGuess; i++)
            {
                cout << visibleLetters[i];
            }
            // 2) print to screen availableLetters
            cout << "\nAvailable letters: ";
            for (int i = 0; i < NUM_LETTERS; i++) // runs through avalable letters
            {
                cout << availableLetters[i] << " ";
                if (i == 7)
                {
                    cout << "\n";
                }
            }
            // 3) User Interactions
            //    a) Ask the user to guess a letter (letterGuess)
            cout << "\nPlease enter your guess: ";
            //    b) input validation
            getline(cin, stGuess, '\n');
            if (stGuess.size() == 1)
            {
                chGuess = stGuess[0];
            }
            else
            {
                chGuess = ' ';
            }
            //       - is it a letter (if not a letter, ask user for another letter)
            if (!isalpha(chGuess))
            {
                cout << "\nError! invalid input. Please try again: \n\n";
                continue;
            }
            chGuess = tolower(chGuess);
            //       - is the letter still available (if not available, ask user for another letter)
            // 4) Remove the letter from the availableLetter
            //    a) Replace the letter already guessed with space ' '
            bool forIf = 1; // I am using this for the following if
            if (forIf)      // if true
            {
                for (int i = 0; i < NUM_LETTERS; i++) // run through the array looking for users guess
                {
                    if (availableLetters[i] == chGuess) // if found
                    {
                        forIf = 0;                 // if your find the letter set this to false
                        availableLetters[i] = '-'; // When you find if, replace it with something
                    }
                }
                if (forIf == 1) // if letter was not found this will stay 1
                {
                    cout << "\nThat charecter has already been guessed, try another. \n\n";
                    continue; // go back to begining so that I can ask you again
                }
                cout << "\n";
            }

            // 5) Is the letter guessed by the user in the word being guessed
            //    a) if the letter is in the word, then update all elements in the visibleLetter
            for (int i = 0; i < lengthGuess; i++) // runs through and is one of the letters are not the same
            {
                if (randWord[i] != chGuess) // then this will make letter = 1
                {
                    letter = 1;
                }
            }
            for (int i = 0; i < lengthGuess; i++) // runs through and if the letters are the same
            {
                if (randWord[i] == chGuess) // then this will set letter to 0
                {
                    visibleLetters[i] = chGuess; // if letter in randword then show me
                    letter = 0;
                }
            }
            //    b) if the letter is not in the word, subtract from maxNumGuesses
            if (letter) // if letter = 1
            {
                maxNumGuesses--; // you guessed wrong
                cout << chGuess << " not in the word. Too bad. " << maxNumGuesses
                     << " incorrect guesses remaining.\n\n";
            }
            else
            { // you guessed right
                cout << "Nice! " << chGuess << " is in the word.\n\n";
            }

            // 6) if the user has successfully guessed all the letters
            //    a) break out of the loop
            compare = 0; // revert this to 0
            for (int i = 0; i < lengthGuess; i++)
            {
                if (randWord[i] != visibleLetters[i]) // make compare true if a letter is not guessed
                {
                    compare = 1;
                }
            }
            if (compare) // if your not done then continue
            {
                continue;
            }
            else
            {
                break;
            }
        }

        if (maxNumGuesses == 0 || compare == 0) // checks if they lost or if they won
        {
            if (compare == 0) // they won
            {
                cout << "Wow! You got the word " << randWord << ", good job.\n";
            }
            else // they lost
            {
                cout << "Sorry, the word was actually " << randWord
                     << ". Theres always next time.\n";
            }
            cout << "Would you like to go again? (yes or no): ";
            cin.get(goAgain); // get uesr input for if they want to go again
            cout << "\n\n";
            if (tolower(goAgain) != 'y') // if they type anythig before y
            {
                cout << "\nAlright, i'll see you latter.\n\n";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore everything they typed exept the first char
        }
    } while (tolower(goAgain) == 'y'); // if they responded with a y before there answere, go again

    // END OF GAME LOOP

    return 0;
}