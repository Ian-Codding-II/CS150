#include <iostream>
using namespace std;

bool containsTwice(string mes, char find);

int main()
{
    return 0;
}

bool containsTwice(string mes, char find) {
    int count = 0;
    for(long unsigned i = 0; i < mes.length(); i++){
        if(mes[i] == find){
            count++;
        }
    }
    if(count >= 2){
        return true;
    }
    return false;
}
