/**
 * @file deck.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "deck.hpp"

// Code implementation of the Deck member functions goes inside this file

// Deck() --- default class constructor
//   1. initialize random number generator 
//          srand(time(0));
//   2. Create the deck of cards (52 Card objects)
//          loop 52 times
//             a. create an instance of the Card class
//             b. set the card instance to the value of the counter
//             c. add the card to the undealt deck vector
Deck::Deck()
{
    srand(time(0));

    for (int i = 0; i < (NUM_RANKS * NUM_SUITS); i++)
    {
        Card card;
        card.setValue(i);
        mUndealt.push_back(card);
    }
}

// void printUndealtDeck() const - print all cards in the undealt deck vector
//                                 if empty, print "Empty deck!"
//   counter loop based on the size of the vector
//       a. access an element of the vector which is a Card object
//       b. Use the Card object's print member function
//       c. go to the next element
void Deck::printUndealtDeck() const
{
    if (mUndealt.empty())
    {
        cout << "Empty deck!\n";
    }
    else
    {
        for (long unsigned i = 0; i < mUndealt.size(); i++)
        {
            mUndealt[i].print();
        }
    }
}

// void printDealtDeck() const - print all cards in the dealt deck vector,
//                               if empty, print "Empty deck!"
//   counter loop based on the size of the vector
//       a. access an element of the vector which is a Card object
//       b. Use the Card object's print member function
//       c. go to the next element
void Deck::printDealtDeck() const
{
    if (mDealt.empty())
    {
        cout << "Empty deck!\n";
    }
    else
    {
        for (long unsigned i = 0; i < mDealt.size(); i++)
        {
            mDealt[i].print();
        }
    }
}

// bool isEmpty() const --- return true if there are no cards left to deal, false otherwise
bool Deck::isEmpty() const
{
    return mUndealt.empty();
}

// void reset() --- Reset the deck (completely undealt). We are moving all the cards in 
//                  the dealt vector back to the undealt vector.
//   loop while the dealt deck is not empty
//       a. compute for the last index of the dealt deck vector and save it to a variable
//       b. get the Card from the last index in the dealt vector then,
//       c. push that Card back to the undealt vector
//       d. remove the last Card from the dealt vector
void Deck::reset()
{
    while (!mDealt.empty())
    {
        Card last = mDealt.back();
        //Card last = mDealt[mDealt.size()-1];

        mUndealt.push_back(last);

        mDealt.pop_back();
    }
}

// Card dealCard() --- Deal a single card
//   1. get a random card through an random index 
//      (HINT: As cards are dealt, the deck size gets smaller. 
//             Ensure, random index is a valid random index)
//   2. swap the last card in the undealt deck with the random card in the undealt deck
//      a. using the random index, get the random card from the undealt deck and assign 
//         to a new instance of the Card
//      b. assign or copy the last Card to the Card at the random index position in the undealt deck
//      c. assign or copy the random card from Step a) to the last Card in the undealt deck
//   3. then add or push a copy of the random card to the dealt deck vector
//   4. remove the last card in the undealt deck
//   5. return the random card
Card Deck::dealCard()
{
    int index = rand() % mUndealt.size();
    Card last = mUndealt[mUndealt.size()-1];

    // Card randCard = swap(mUndealt[index], mUndealt(last)); //not working quite right
    Card randCard = mUndealt[index];

    mUndealt[index].setValue(last.getValue());
    mDealt.push_back(randCard);
    mUndealt.pop_back();

    return randCard;
}
