#include <iostream>
using namespace std;

bool isPalindrome(string s);
int main()
{
    string strin = "nurses run";
    bool check = isPalindrome(strin);
    cout << strin << " is " << (check ? "a palindrome!\n" : "not a palindrome!\n");
}

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        // Skip spaces
        while (i < j && s[i] == ' ') i++;
        while (i < j && s[j] == ' ') j--;

        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}
