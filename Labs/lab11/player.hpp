/**
 * @file player.hpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-04-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "deck.hpp"
#include "card.hpp"

const int INITIAL_NUM_CARDS = 2;

class Player { // class will have the following member functions and variable
public:

    void setName(string name); // - set player's name
    string getName() const; // - return player's name
    void hitCard(Deck &deck); // - get a card from the deck and add it to the player's hand
    void reset(); // - remove all cards on hand
    void newHand(Deck &deck); // - get a new set of cards to add to the player's hand
    int count() const; // - return the total count from the player's cards
    void print() const; // - print the player's card
    
private:
    vector<Card> mHand; // - the player's hand
    string mName; // - the player's name
};

#endif