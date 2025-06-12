#include <iostream>
#include <vector>
using namespace std;

struct Dimensions
{
    int mLength = 0;
    int mWidth = 0;
    int mHeight = 0;
};

class Room
{
    public:
    Room(int number, string name, string color, Dimensions dimensions, bool IsLab){
        mNumber = number;
        mName = name;
        mColor = color;
        mDimensions = dimensions;
        mIsLab = IsLab;

    }
    ~Room(){};

        int getNumber(){
            return mNumber;
        }
        void setNumber(int number){
            mNumber = number;
        }
        string getName(){
            return mName;
        }
        void setNumber(string name){
            mName = name;
        }
        string getColor(){
            return mColor;
        }
        void setColor(string color){
            mColor = color;
        }
        Dimensions getDimensions(){
            return mDimensions;
        }
        void setDimensions(Dimensions dimensions){
            mDimensions = dimensions;
        }
        bool getIsLab(){
            return mIsLab;
        }
        void settIsLab(bool IsLab){
            mIsLab = IsLab;
        }

private:
    int mNumber;
    string mName; 
    string mColor;
    Dimensions mDimensions;
    bool mIsLab;
};

class Building
{
    public:
    Building(vector<Room> rooms){
        mRooms = rooms;
    }

    vector<Room> getRooms(){
        return mRooms;
    }
    void setRooms(vector<Room> rooms){
        mRooms = rooms;
    }


    private:
    vector<Room> mRooms;

};


int main()
{
    // Struct
    Dimensions dimension = {40, 40, 10};

    // Object - instance of class
    Room room1 =Room(5, "Computer Science", "beige", dimension, true);
    Room room2 =Room(6, "Engineering", "red", dimension, false);


    vector<Room> rooms;
    rooms.push_back(room1);
    rooms.push_back(room2);

    Building building = Building(rooms);

    return 0;
}