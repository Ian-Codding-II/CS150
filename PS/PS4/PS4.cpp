#include <iostream>
#include <string>
using namespace std;

void spending(std::string name)
{
    double amount;
    cout << "How much will " << name << " be spending? ";
    cin >> amount; cout << endl;

    
    int numBills =  (amount / 20.0);
    if (numBills * 20.0 < amount) 
    {
        numBills++;
        cout << name << " needs " << numBills 
            << " bills" << endl;
        
        
    }
}
int main()
{
    cout << "Please enter your name ";
    string name;
    cin >> name;
    spending(name);

    return 0;
}