/**
 * @file size.cpp
 * @authorIan Codding II
 * @brief Finds the size of variables
 * @version 0.1
 * @date 2025-04-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;
int main()
{
char letter;
// 1 byte
short number;
// 2 bytes
float amount;
// 4 bytes
double profit;
// 8 bytes
int age;
// 4 bytes
char ch;
// 1 byte
cout << "Address of letter is: "
<< static_cast<void *>(&letter)
<< " with " << sizeof(letter) << " byte\n";
cout << "Address of number is: " << &number
<< " with " << sizeof(number) << " bytes\n";
cout << "Address of amount is: " << &amount
<< " with " << sizeof(amount) << " bytes\n";
cout << "Address of profit is: " << &profit
<< " with " << sizeof(profit) << " bytes\n";
cout << "Address of age is: " << &age
<< " with " << sizeof(age) << " bytes\n";
cout << "Address of ch is: "
<< static_cast<void *>(&ch)
<< " with " << sizeof(ch) << " byte\n";
return 0;
}