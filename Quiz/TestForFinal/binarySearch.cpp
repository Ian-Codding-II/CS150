#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &vec, int target);

int main()
{
    return 0;
}

int binarySearch(vector<int> &vec, int target)
{
    int first = 0,             // First array element
        last = vec.size() - 1, // Last array element
        middle,                // Midpoint of search
        position = -1;         // Position of search value
    bool found = false;        // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (vec[middle] == target)   // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (vec[middle] > target) // If value is in lower half
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1; // If value is in upper half
        }
    }
    return position;
}