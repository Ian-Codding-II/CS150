#include <iostream>
#include <vector>
using namespace std;

class Movie {
public:
    Movie() {
        mTitle = "";
        mDirector = "";
        mYear = 0;
    }
    ~Movie(){}
    void setTitle(string t) {
        mTitle = t;
    }
    void setDirector(string d) {
        mDirector = d;
    }
    void setYear(int y) {
        mYear = y;
    }
    const int getYear() {
        return mYear;
    }
    const string getTitle() {
        return mTitle;
    }
    const string getDirector() {
        return mDirector;
    }
private:
    string mTitle;
    string mDirector;
    int mYear;
};

int main()
{
    vector<Movie> vec[10];
    Movie m;
    m.setTitle("Harry Potter and the Goblet of Fire");
    m.setDirector("Mike Newell");
    m.setYear(2005);
    vec[6].push_back(m);

    cout << vec[6][0].getTitle() << endl << vec[6][0].getDirector() << endl << vec[6][0].getYear() << endl;
}