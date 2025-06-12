//9.cpp(10 pts)
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string phrase);

int main()
{
    string input;
    cout << "Enter the string and I will tell if it is a palindrome: " << endl;
    getline(cin,input);
    if (isPalindrome(input))
        cout <<"\nIt is a palindrome\n";
    else
        cout <<"\nIt is not a palindrome\n";
    return 0;
}
/**
7.	(10 pts) Write a function called isPalindrome()
that accepts a string, and returns a boolean value.
This function returns true if the string is a palindrome,
otherwise false. A palindrome is a word or phrase that reads
the same backward as forward (e.g. madam, nurses run, etc.).
Note: string can have spaces for example, "taco cat".**/

bool isPalindrome(string phrase){
    int size = phrase.length();
    int start=0;
    while(start < size){
        if (phrase[start] == ' '){
            start++;
            continue;
        }
        if(phrase[size-1] == ' '){
            size--;
            continue;
        }
        if (phrase[start]!=phrase[size-1]){
            return false;            
        }
        start++;
        size--;
    }
    return true;
}