/**
 * @file 15.1.cpp
 * @author Ian Codding II
 * @brief This program demonstrates the use of pointers.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;
int main()
{
   int x = 10;
   //define the pointer to int called ptr
   int *ptr = nullptr;

   //store the address of x in ptr
   ptr = &x;
   //print the value and address of x using x
   cout << "The value of x is " << x << endl;
   cout << "The address of x is " << &x << endl;

   //print the value and address of x using ptr
   cout << "The value of x is " << *ptr << endl;
   cout << "The address of x is " << ptr << endl;

   //multiply the x by 2 using x
   x *=2;
   //and print new value of x using x
   cout << "New value of x is " << x << endl;

   //multiply the x by 2 again using ptr
   *ptr *=2;
   //and print new value of x using ptr
   cout << "New value of x is " << *ptr << endl;

   return 0;
}
