#include <iostream>
using namespace std;

int indexOf(int list[], int time, int num);

int main()
{
    int list[] = {};
    int result = indexOf(list, 0, 2);
    cout << "Result is: " << result << "\n";
}

int indexOf(int list[], int time, int num)
{
    int ret = -1;
    for (int i = 0; i < time; i++)
    {
        if (list[i] == num)
        {
            ret = i;
            return ret;
        }
    }
    return ret;
}