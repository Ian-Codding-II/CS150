#include <iostream>
using namespace std;

void crazyCaps(string& mes){
    for(long unsigned i = 0; i<mes.length(); i++){
        if(i%2==0){
            mes[i] = tolower(mes[i]);
        } else {
            mes[i] = toupper(mes[i]);
        }
    }
}