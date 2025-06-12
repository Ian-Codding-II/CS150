/**
 * @file card.cpp
 * @author Ian Codding II
 * @brief defining class card
 * @version 0.1
 * @date 2025-04-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "card.hpp"


// Code implementation of the Card member functions goes here

// int getValue() --- Get card value
// - return the value of the mCardValue member variable
int Card::getValue() const
{
    return mCardValue;
}

// void setValue(int value) --- Set card value (0 to 51). Check to make sure value is valid. If invalid, set value to -1.
// - set the value of the mCardValue member variable
void Card::setValue(int value)
{
    if (value > 51 || value < 0)
    {
        mCardValue = -1;
    }
    else
    {
        mCardValue = value;
    }
}

// void setValue(int suit, int rank) --- Set card value (0 to 51). But you have to convert the value of suit and rank to 0 to 51.
//                                       Check to make sure the value of suit and rank are valid values suit (0 to 3) and rank (0 to 12)
// - set the value of the mCardValue member variable
void Card::setValue(int suit, int rank)
{
    bool invalidSuit = false;
    bool invalidRank = false;
    if (suit > 3 || suit < 0)
    {
        invalidSuit = true;
    }
    if (rank < 0 || rank > 12)
    {
        invalidRank = true;
    }
    if (invalidRank  || invalidSuit)
    {
        mCardValue = -1;
    }
    else
    {
        mCardValue = suit * NUM_RANKS + rank;
    }
}

// void print() --- Print card value
// IMPORTANT NOTE: The card's value can be between 0 and 51 (since there are 52 cards in the standard deck). 
//                 If the card value is -1, print to the screen "Joker\n"
// 1. We can determine the rank for the card by taking the card's value modulo by NUM_RANKS. That yields a result between 0 and 12, where
//    0 - means a rank of Ace, 
//    1-9 - means a rank value of 2 to 10 respectively, and 
//    10, 11, 12 has a rank value of Jack, Queen, King respectively.
// 2. We can determine the suit by taking the card's value and dividing by a NUM_RANKS (which yields a result between 0 and 3).
//
// Example: if the card's value is 0, the print member function should print
//    Ace of Clubs
void Card::print() const
{
    //int suitI = -1;
    //int rankI = -1;
    if (mCardValue == -1)
    {
        cout << "Jocker\n";
    }
    else
    {
        // suitI = mCardValue / NUM_RANKS;
        // rankI = mCardValue % NUM_RANKS;

        // for (int i = 0; i < rankI; i++)
        // {
        //     for (int j = 0; j < suitI; j++)
        //     {
                   cout << getRank() << " of " << getSuit() << endl;
        //     }
        // }
    }
}
/**
 * @brief Get the Rank object
 * 
 * @return string 
 */
string Card::getRank() const
{
    if (mCardValue == -1)
    {
        return "Joker\n";
    }
    else
    {
        int rankI = mCardValue % NUM_RANKS;
        return RANKS[rankI];
    }
}
/**
 * @brief Get the Suit object
 * 
 * @return string 
 */
string Card::getSuit() const
{
    if (mCardValue == -1)
    {
        return "Joker\n";
    }
    else
    {
        int suitI = mCardValue / NUM_RANKS;
        return SUITS[suitI];
    }
}
/**
 * @brief Construct a new Card:: Card object
 * 
 */
Card::Card()
{
    mCardValue = -1;
}
/**
 * @brief returns a range of values
 * 
 * @return int 
 */
int Card::getPitValue() const {
    return mCardValue % NUM_RANKS + 1;
}