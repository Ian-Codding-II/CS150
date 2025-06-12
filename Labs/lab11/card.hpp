/**
 * @file card.hpp
 * @author Ian Codding II
 * @brief Initualizing
 * @version 0.1
 * @date 2025-04-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <string>
using namespace std;

// Source: https://en.wikipedia.org/wiki/Standard_52-card_deck
const int NUM_RANKS = 13;
const int NUM_SUITS = 4;
const string RANKS[] = {"Ace", "Two", "Three", "Four", "Five", 
                        "Six", "Seven", "Eight", "Nine", "Ten",
                        "Jack", "Queen", "King"};
const string SUITS[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

class Card
{
private:
    int mCardValue;

public:
    Card();
    void setValue(int value);
    void setValue(int suit, int rank);
    int getValue() const;
    void print() const;
    string getRank() const;
    string getSuit() const;
    int getPitValue() const;
};

#endif