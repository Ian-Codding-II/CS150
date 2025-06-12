#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

double  averageValueInFile(string name);

int main()
{
    averageValueInFile("input.txt");
    return 0;
}

double  averageValueInFile(string name)
{
    double mean = 0.0;
    int numTimes = 0;
    double num = 0.0;
    double total = 0.0;
    ifstream someFile;

    someFile.open(name);
    while (someFile >> num)
    {

        total += num;

        numTimes++;
    }
    
    mean = total / numTimes;
    cout << fixed << setprecision(2);
    cout << mean << endl;

    return mean;
}