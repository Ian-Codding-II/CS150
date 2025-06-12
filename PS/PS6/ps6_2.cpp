#include <iostream>
using namespace std;
void asciiFigure(int sise);
int main()
{
    int sise = 0;
    void asciiFigure(int sise);
    cout << "Start: ";
    cin >> sise;
    asciiFigure(sise);
    cout << "\n";

    return 0;
}
void asciiFigure(int sise)
{
    for (int line = 1; line <= sise; line++)
    {
        for (int fSlash = 0; fSlash < 4*(sise - line); fSlash++)
            {
                cout << "/";
            }
        
        for (int star = 1; star <= 8*(line -1); star++)
        {
            
            cout << "*";

        }
        
        for (int bSlash = 0; bSlash < 4*(sise - line); bSlash++)
            {
                cout << "\\";
            }
        
        cout << "\n";
    }
}