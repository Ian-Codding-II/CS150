/**
 * @file quizNum1.cpp
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
using namespace std;

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

    cout << endl << "This is The Godfather Trivia Questions quiz!\n\n";

    int score = question1()+question2()+question3()+question4()+question5()+question6()+question7()+question8()+question9()+question10();

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

int question1()
{

    // 1. What year was The Godfather released? 1972
    string quis1 = "1) What year was The Godfather released?\n";
    string userAnswer;
    string correctAnswer="1972";
    cout << quis1;
    cout << "Please enter your Answer as an integer: ";
    cin >> userAnswer; cout << "\n\n";

    int question1=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question1=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question1;
}

int question2()
{
    /* 2. In “The Godfather, Part III”, who said, 
    “Never hate your enemies. It affects your judgment”? Michael Corleone*/
    string quis2 = "2) In “The Godfather, Part III”, who said, \n“Never hate your enemies. It affects your judgment”?\n";
    string a = "a) Vincent Mancini\n"; 
    string b = "b) Michael Corleone\n";  
    string c = "c) Tom Hagen\n";  
    string d = "d) Don Corleone\n"; 
    string e = "e) None of the above\n";
    string userAnswer;
    string correctAnswer="b";
    cout << quis2 << a << b << c << d << e;
    cout << "Please enter your Answer as a charecter a-e: ";
    cin >> userAnswer; cout << "\n\n";

    int question2=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question2=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question2;
}

int question3()
{
    /* 3. What did Don Corleone want the head
    of a big Hollywood studio to do in “The Godfather”?
    Cast Johnny Fontane In A War Film*/
    string quis3 = "3) What did Don Corleone want the head \nof a big Hollywood studio to do in “The Godfather”? \n";
    string a = "a) Cast Johnny Fontane In A War Film\n";
    string b = "b) Hire His Daughter\n"; 
    string c = "c) Sell Out To Him\n";
    string d = "d) Make A Nice Mob Movie\n"; 
    string e = "e) None of the above\n";
    string userAnswer;
    string correctAnswer= "a";
    cout << quis3 << a << b << c << d << e;
    cout << "Please enter your Answer as a charecter a-e: ";
    cin >> userAnswer; cout << "\n\n";

    int question3=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question3=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question3;
}

int question4()
{
    /* 4. Michael wanted control of 
    the Immobiliare institution in “The Godfather: Part III”! true*/
    string quis4 = "4) Michael wanted control of \nthe Immobiliare institution in “The Godfather: Part III”!\n";
    string userAnswer;
    string correctAnswer="true";
    cout << quis4;
    cout << "Please type true or false?: ";
    cin >> userAnswer; cout << "\n\n";
    
    int question4=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question4=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question4;
}

int question5()
{
    // 5. In “The Godfather: Part II”, Johnny Ola was known as the Sicilian messenger boy!
    string quis5 = "5) In “The Godfather: Part II”, \nJohnny Ola was known as the Sicilian messenger boy!\n";
    string userAnswer;
    string correctAnswer= "true";
    cout << quis5;
    cout << "Please type true or false?: ";
    cin >> userAnswer; cout << "\n\n";

    int question5=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question5=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question5;
}

int question6()
{
    /* 6. Which certain food item is said to symbolize death in “The Godfather”?
    An Orange*/
    string quis6 = "6) Which certain food item is said \nto symbolize death in “The Godfather”?\n";
    
    string a = "a) A Loaf Of Bread\n";
    string b = "b) An Orange\n";
    string c = "c) Cheese\n";
    string d = "d) An Apple\n";
    string e = "e) None of the above\n";
    string userAnswer;
    string correctAnswer="b";
    cout << quis6 << a << b << c << d << e;
    cout << "Please enter your Answer as a charecter a-e: ";
    cin >> userAnswer; cout << "\n\n";

    int question6=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question6=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question6;
}

int question7()
{
    /* 7. Which relative of Martin Scorsese appears in “The Godfather: Part III”?
    Catherine*/
    string quis7 = "7) Which relative of Martin Scorsese appears \nin “The Godfather: Part III”?\n";
    
    string a = "a) Catherine\n";
    string b = "b) Donatella\n"; 
    string c = "c) Maria\n"; 
    string d = "d) Jenna\n";
    string e = "e) None of the above\n";
    string userAnswer;
    string correctAnswer="a";
    cout << quis7 << a << b << c << d << e;
    cout << "Please enter your Answer as a charecter a-e: ";
    cin >> userAnswer; cout << "\n\n";

    int question7=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question7=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question7;
}

int question8()
{
    /* 8. Clemenza said the classic line 
    from “The Godfather”, “Leave the gun, take the cannoli”?*/
    string quis8 = "8) Clemenza said the classic line \nfrom “The Godfather”, “Leave the gun, take the cannoli”?\n";
    string userAnswer;
    string correctAnswer="true";
    cout << quis8;
    cout << "Please type true or false?: ";
    cin >> userAnswer; cout <<"\n\n";

    int question8=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question8=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question8;
}

int question9()
{
    /* 9. In “The Godfather: Part II”, 
    what is Hyman Roth watching on TV when Michael visits him in Miami?
    College Football*/
    string quis9 = "9) In “The Godfather: Part II”, \nwhat is Hyman Roth watching on TV \nwhen Michael visits him in Miami?\n";
    string a = "a) Golf\n";
    string b = "b) College Football\n";  
    string c = "c) College Basketball\n";  
    string d = "d) Baseball\n"; 
    string e = "e) None of the above\n";
    string userAnswer;
    string correctAnswer="b";
    cout << quis9 << a << b << c << d << e;
    cout << "Please enter your Answer as a charecter a-e: ";
    cin >> userAnswer; cout << "\n\n";

    int question9=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!" << endl << endl;
        question9=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question9;
}

int question10()
{
    /* 10. How many Oscar nominations did “The Godfather: Part III” receive?
    7*/
    string userAnswer;
    string correctAnswer="7";
    string quis10 = "10) How many Oscar nominations \ndid “The Godfather: Part III” receive?\n";
    cout << quis10;
    cout << "Please enter the number receved as an integer: ";
    cin >> userAnswer; cout << "\n\n";

    int question10=0;
    if (userAnswer == correctAnswer)
    {
        cout << "That is correct!\n" << endl << endl;
        question10=1;
    }
    else
    {
        cout << "Sorry, the Answer is actualy " << correctAnswer << endl << endl;
    }
    return question10;

}