#include <iostream>
using namespace std;

string convert(string time);
int main()
{
    cout << convert("03:00:00AM") << endl;
}

string convert(string time) {
    int i = 0;
    int j = time.length() - 1;
    if (time[j-1] == 'A') {
        if (time[i+1] == '2') {
            time[i] = '0';
            time[i+1] = '0';
        }
    } else if (time[i+1] != '2' && time[j-1] == 'P') {
        for (int k =0; k < j; k+=2) {
            if (k < 2) {
                time[k] += 1;                    
                time[k+1] += 2;                    
            }            
        }
    }
    
    time[j] = ' ';
    time[j-1] = ' ';
    
    return time;
}
