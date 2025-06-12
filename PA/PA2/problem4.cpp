/**
 * @file   <problem4.cpp>
 * @author <Ian Codding II>
 * @brief  <This is a song>
 * @date   <1/30/2025>
 *
 */

#include <iostream>
using namespace std;

// These are all here so that the scope will stop getting mad at me.
void Hey();

void With(); void Semi(); void Hat(); void CPU();

void Rap(); void Help(); void But(); void First();

void Lost();

int main()
{
    // This is the song seperated by vers.
    Hey(); With(); Semi(); Hat(); 
    cout << endl;

    Hey(); With(); CPU(); Rap(); Semi(); Hat(); 
    cout << endl;

    Hey(); With(); First(); Lost(); CPU(); Rap(); Semi(); Hat(); 
    cout << endl;

    Hey(); With();  Help();  But();  First();  
        Lost();  CPU();  Rap();  Semi();  Hat(); 
    cout << endl;

    Hey(); With(); 
    cout << "I got full credit on external correctness\n"
        << "Hey playa check this, my code eats yours for breakfast\n";
        Help(); But(); First(); Lost(); CPU(); Rap(); Semi(); Hat();

    return 0;
}

//And this is the mess that I cant make any better.
void Hey()
{
    cout <<"Hey homies, my code is gonna rock this place\n";
}

void With()
{
    cout<<"With a function named main and a curly brace\n";
}

void Semi()
{
    cout <<"I put a semicolon at the end of each line\n";
}

void Hat()
{
    cout<<"You haters never seen code that looked so fine\n";
}

void CPU()
{
    cout<<"The CPU loves my code, no need to debug\n";
}

void Rap()
{
    cout<<"I can rap in C++ until it unplug\n";
}

void Help()
{
    cout <<"Got help from the TAs in the IPL\n";
}

void But()
{
    cout <<"But I didn't need it cause I code so well\n";
}

void First()
{
    cout <<"The first time I try, my code compiles\n";
}

void Lost()
{
    cout <<"Lost a point for style cause my comments are vile\n";
}