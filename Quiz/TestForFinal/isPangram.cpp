#include <iostream>
using namespace std;

bool isPangram(string s);
int main()
{
    string strin = "nuabcdefghigklmjnopqrstuvwxyzrses run";
    bool check = isPangram(strin);
    cout << strin << " is " << (check ? "a Pangram!\n" : "not a Pangram!\n");
}

bool isPangram(string s) {
    bool found[26] = {false};

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            found[index] = true;
        }
    }

    // Check if all 26 letters were found
    for (int i = 0; i < 26; i++) {
        if (!found[i])
            return false;
    }

    return true;
}
