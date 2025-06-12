#include <iostream>
using namespace std;

int main()
{
    int userNum=0;
    cout <<"Max value? ";
    cin >> userNum;


    for (int num=1; num <= userNum; ++num)
    {
        if (num%(3*5)==0)
        {
            cout << "FizzBuzz ";
        }
        else if (num%3==0)
        {
            cout << "Fizz ";
        }
        else if (num%5==0)
        {
            cout << "Buzz ";
        }
        else
        {
            cout << num << " ";
        }
        if (num%20==0)
        {
            cout << endl;
        }
        
    }

    cout << endl;

    return 0;
}