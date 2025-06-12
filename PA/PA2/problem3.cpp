/**
 * @file   <problem3.cpp>
 * @author <Ian Codding II>
 * @brief  <This is an equation>
 * @date   <1/30/2025>
 *
 */

#include <iostream>
using namespace std;

int main()
{
    //The calculations
    double energy_drinks = 20200.0*(18.0/100.0);
    double citrus = energy_drinks*(52.0/100);

    //what they should see
    cout <<"The approximate number of customers in the survey \n";
    cout <<"who purchase energy drinks per week is "
        << energy_drinks
        << endl;
    cout << "And for citrus flavored energy drinks "
        << citrus
        << endl;
    return 0;

}