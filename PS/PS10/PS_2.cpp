#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
private:
    int mDate, mMonth;
public:
    Date();
    // constructs a new date representing the given month and day
    Date(int m, int d)
    {
        mDate = d;
        mMonth = m;
    }

        // returns the number of days in the month stored by your date object
        int daysInMonth()
        {
            if (mMonth == 2) {
                return 28;
            }

            // Months with 30 days: April, June, September, November
            if (mMonth == 4 || mMonth == 6 || mMonth == 9 || mMonth == 11)
                return 30;

            // All other months have 31 days
            return 31;
        }

        // returns the day
        int getDay()
        {
            return mDate;
        }

        // returns the month
        int getMonth()
        {
            return mMonth;
        }

        // advances the Date to the next day, wrapping to the next month and/or year if necessary
        void nextDay()
        {
            mDate++;
            if (mDate > daysInMonth()) 
            {
                mDate = 1;
                mMonth++;
                if (mMonth > 12) 
                {
                    mMonth = 1;
                }
            }
        }

        // returns a string representation such as "07/04"
        string toString()
        {
            return (mMonth < 10 ? "0" : "") + to_string(mMonth) + "/" + (mDate < 10 ? "0" : "") + to_string(mDate);
        }
};