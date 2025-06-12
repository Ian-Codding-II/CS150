/**
 * @file quiz_12.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <iostream>

 using namespace std;

class Dimension
 {
public:
    Dimension();

    ~Dimension();

    void setHeight(double someHeight);
    void setWidth(double someWidth);
    void setDepth(double someDepth);

    double getHeight() const;
    double getWidth() const;
    double getDepth() const;

private:
    double height;
    double width;
    double depth;
 };

 int main()
 {
    
 }