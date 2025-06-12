/**
 * @file quiz.cpp
 * @author Ian Codding II
 * @brief This quis is on
 * The Godfather Trivia Questions You Can’t Refuse
 * From the online source triviawhizz.com
 * @version 0.1
 * @date 2025-02-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <string>
using namespace std;

void multipleChoice(int num, string question, string chA, string chB, string chC, string chD, string chE);

int question1();
int question2();
int question3();
int question4();
int question5();
int question6();
int question7();
int question8();
int question9();
int question10();

int main()
{
    string userAnswer;
    string correctAnswer;
    int score=0;
    
    cout << endl << "This is The Godfather Trivia Questions quiz!\n\n";

    multipleChoice(1,"What year was The Godfather released?","I", "love", "to", "code", "nonsence");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="1972";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(2, "In “The Godfather, Part III”, who said, \n“Never hate your enemies. It affects your judgment”?", "a) Vincent Mancini", "b) Michael Corleone", "c) Tom Hagen", "d) Don Corleone", "e) None of the above");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="b";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(3,"What did Don Corleone want the head \nof a big Hollywood studio to do in “The Godfather”?","a) Cast Johnny Fontane In A War Film", "b) Hire His Daughter", "c) Sell Out To Him", "d) Make A Nice Mob Movie", "e) None of the above");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="a";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(4,"Michael wanted control of \nthe Immobiliare institution in “The Godfather: Part III”!","I", "love", "to", "code", "nonsence");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="true";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(5,"In “The Godfather: Part II”, \nJohnny Ola was known as the Sicilian messenger boy!","I", "love", "to", "code", "nonsence");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="true";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(6,"Which certain food item is said \nto symbolize death in “The Godfather”?","a) A Loaf Of Bread", "b) An Orange", "c) Cheese", "d) An Apple", "e) None of the above");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="b";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(7,"Which relative of Martin Scorsese appears \nin “The Godfather: Part III”?","a) Catherine", "b) Donatella", "c) Maria", "d) Jenna", "e) None of the above");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="a";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(8, "Clemenza said the classic line \nfrom “The Godfather”, “Leave the gun, take the cannoli”?", "yet", "again", "nothing", "but", "nonsence");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="true";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(9,"In “The Godfather: Part II”, \nwhat is Hyman Roth watching on TV \nwhen Michael visits him in Miami?","a) Golf", "b) College Football", "c) College Basketball", "d) Baseball", "e) None of the above");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="b";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    

    multipleChoice(10,"How many Oscar nominations \ndid “The Godfather: Part III” receive?","I", "love", "to", "code", "nonsence");
    cin >> userAnswer; cout << "\n\n";
    correctAnswer="7";
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        score++;
    }
    else
    {
        cout << "Sorry, the answer is actualy " << correctAnswer << endl << endl;
    }
    


    if (score == 10)
    {
        cout << "Wow, you really know your stuff. Must be a fan like me because you got a score of " 
            << score << " out of 10" << endl << endl;
    }
    else if (score >= 5)
    {
        cout << "Well, thats not actualy as bad as most, you got a score of " << score 
            << " out of 10. I just happen to know a little more about this. " << endl << endl;
    }
    else
    {
        cout << "Ouch, well, dont feel bad about a score of " << score 
            << " out of 10. I just happen to know a lot about this." << endl << endl;
    }
    
    
    return 0;
}


void multipleChoice(int num, string question, string chA, string chB, string chC, string chD, string chE)
{

    if (num==4||num==5||num==8)
    {
        cout << num << " " << question << "\n";
        cout << "Please type true or false?: ";
    }
    else if (num==1||num==10)
    {
        cout << num << " " << question << "\n";
        cout << "Please enter your answer as an integer: ";
    }
    else
    {
        cout << num <<" "<< question << "\n"
            << chA << "\n"
            << chB << "\n"
            << chC << "\n"
            << chD << "\n"
            << chE << "\n";
        cout << "Please enter your answer as a charecter a-e: ";
    }
}