#include <iostream>
using namespace std;

double computeTax(double sa);

int main()
{
    return 0;
}

double computeTax(double sa){
    if(sa >= 0 && sa < 7150){
        return (0 + (sa-0)*0.10);
    } else if(sa >= 7150 && sa < 29050){
        return (715 + (sa-7150)*0.15);
    } else if (sa >= 29050 && sa < 70350){
        return (4000 + (sa-29050)*0.25);
    } else if(sa >= 70350){
        return (14325 + (sa-70350)*0.28);
    }
    return -1;
}