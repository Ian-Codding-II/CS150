#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string message;
    int key;
    cout << "Your message? ";
    getline(cin, message);
    cout << "Encoding key? ";
    cin >> key;

    for(long unsigned i = 0; i < message.length(); i++){
        if(message[i] == ' ') {
            continue;
        }
        message[i] = toupper(message[i]);
        if(message[i] >= 'A' && message[i] <= 'Z'){
            message[i] = (message[i] - 'A' + key + 26) % 26 + 'A';
        }
    }
    cout << message << endl;
}