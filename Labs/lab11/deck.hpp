/**
 * @file deck.hpp
 * @author Ian Codding II
 * @brief initializeing
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 
#ifndef DECK_HPP
#define DECK_HPP

#include <vector>
#include <ctime>
#include <cstdlib>
#include "card.hpp"

class Deck
{
public:
    Deck();
    void reset(); //- reset deck to new state (completely undealt)
    void printUndealtDeck() const; //- print all cards in the undealt deck
    void printDealtDeck() const ;//- print all cards in the dealt deck
    bool isEmpty() const; //- determines if there is no cards left to deal
    Card dealCard(); //- is the dealCard() here an accessor or mutator function???
    
private:
    vector<Card> mUndealt; //- contains all cards that has not been dealt yet
    vector<Card> mDealt; //- holds a copy for each card that has already been dealt
};


#endif
