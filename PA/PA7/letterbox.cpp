/**
 * @file letterbox.cpp
 * @author Ian Codding II
 * @brief Letterbox Implementation/Definition File
 * @version 0.1
 * @date 2025-03-17
 *
 * @copyright Copyright (c) 2025
 *
 */
// TODO: Include the header file for letter box
#include "letterbox.h"
// Function definitions for Letterbox
/**
 * @brief This will load info from file into the arrays
 *
 * @param array This is the word the user will guess
 * @param deffOfArray This is there hint
 * @param arraySize This is what I return. it will show how many words there are
 * @param file This is my file
 * @return int
 */
int loadDataToArray(string array[], string deffOfArray[], int sise, ifstream &file)
{
    string delim;
    int arraySize = 0;
    for (int i = 0; file.peek() != EOF; i++) // runs until end of file
    {
        arraySize++;                         // totall number in array
        getline(file, array[i], ' ');        // stores word in the array
        getline(file, delim, ' ');           // eats the nonsence
        getline(file, deffOfArray[i], '\n'); // if you have a definition or
        // hint after the nonsene, this is where its stored
        if (arraySize > 100) // if more then 100 words in file
        {
            cout << "To many words in file, please shorten file."
                 << "\nCome back when you have one hundred or lower.\n";
            exit(1);
        }
    }
    if (arraySize < 10) // if less then 10 words in file
    {
        cout << "Not enough words in file, please add more."
             << "\nCome back when you have at least ten, thank you.\n";
        exit(1);
    }

    return arraySize;
}
/**
 * @brief This function will get a random index for the vector
 *
 * @param vect This vector will be told what word to show. Then it will delete that option.
 * @param hint This reference veriable is for deffOfWords
 * @return string
 */
string randomWord(vector<string> vect, int &hint)
{
    int randi;              // my index for randomness
    string randWord;        // my random word
    bool goAgain = 1;       // bool for my do while
    int size = vect.size(); // size of vector
    bool forBelow = 0;      // bool for my for and if

    do
    {
        for (int i = 0; i < size; i++)
        {
            if (vect[i] != "") // as long as theres a word that is not empty, go find it
            {
                forBelow = 0;
                break;
            }
            if (vect[i] == "") // if there is no more words in the vector, make the bool true
            {
                forBelow = 1;
            }
        }
        if (forBelow) // only if there is no more words in vector
        {
            cout << "\nThere are no more words to guess...\n"
                 << "Thanks for trying my program : )\n\n";
            exit(1); // end program
        }
        goAgain = 0;                           // dont try unless i chnge you
        randi = rand() % size;                 // the index for the vector is made random
        randWord = vect[randi];                // I put a random vector in the string randWord
        int lengthOfRand = randWord.length();  // length of random word
        for (int i = 0; i < lengthOfRand; i++) // makes every letter in the string lowercase
        {
            randWord[i] = tolower(randWord[i]);
        }
        if (randWord.length() > 12 || randWord.empty()) // if you find a word that is over 12 char or empty
        {
            vect[randi] = ""; // make sure it is empty
            goAgain = 1;      // sets the loop to go again to find a word that meats the requirements
        }

    } while (goAgain);
    hint = randi; // the index for deffOfWord

    return randWord;
}
/**
 * @brief This initializes the alphabet
 *
 * @param array This is where the letters go
 * @param arraySize This is the arrays storage amount
 */
void initializeAlphabet(char array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++) // goes through and stores each letter in the array
    {
        array[i] = 'a' + i;
    }
    return;
}
/**
 * @brief This will show dashes to the screen the length of the random word
 *
 * @param array
 * @param arraySize
 */
void initializeDashes(char array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = '-';
    }
    return;
}