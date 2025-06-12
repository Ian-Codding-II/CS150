/**
 * @file convert.cpp
 * @author Ian Codding II
 * @brief
 * @version 0.1
 * @date 2025-03-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "convert.h"
/**
 * @brief an array of the roman numerals
 *
 * @param decimalNumber
 * @return string
 */
string convertToRomanNumeral(int decimalNumber)
{

    string num[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI",
                    "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

    return num[decimalNumber - 1];        
}