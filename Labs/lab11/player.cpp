/**
 * @file player.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-04-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

// Include player header file here
#include "player.hpp"

// Code implementation of the Deck member functions goes inside this file

// void setName(string name) --- Set player's name
void Player::setName(string name) {
    mName = name;
}

// string getName() const --- Return player's name
string Player::getName() const {
    return mName;
}

// void hitCard(Deck &deck) --- Get a card from the deck and add it to the player's hand
//   1. deal a card from the deck
//   2. add the card to the player's hand
void Player::hitCard(Deck &deck) {
    Card c = deck.dealCard();
    mHand.push_back(c);
}

// void reset() --- Remove all cards on hand
//   1. What `vector` member function can you call to simply clear the contents of the `vector` representing the player's hand?
void Player::reset() {
    mHand.clear();
}

// void newHand(Deck &deck) --- Get all new cards
//   1. Reset the player's hand by clearing the contents of the `vector`
//   2. loop for zero to initial number of cards (`INITIAL_NUM_CARDS`)
//       a. get a card from the deck and add card to the player's hand (HINT: could just call another function here)
void Player::newHand(Deck &deck) {
    reset();
    for (int i = 0; i < INITIAL_NUM_CARDS; i++) {
        hitCard(deck);
    }
}

//int count() const --- Return the total count/score from the player's cards
//   1. Sum up the values of the cards based on the card's pip values
//           Card Rank    | Pip Value | Value
//      Ace               |     1     |  11
//      2-10              |    2-10   |  2-10
//      Jack, Queen, King |   11-13   |  10 
int Player::count() const {
    int sum = 0;
    for (long unsigned i = 0; i < mHand.size(); i++) {
        int currentPitVal = mHand[i].getPitValue();
        if (currentPitVal == 1) { // Ace
            sum +=11;
        } else if (currentPitVal >= 11 && currentPitVal <= 13) { // Face value
            sum += 10;
        } else if (currentPitVal >= 2 && currentPitVal <= 10) { // Numbers
            sum += currentPitVal;
        }
    }

    return sum;
}

// void print() const --- print the player's hand 
// 1. Print player's name 
// 2. loop for zero to the number of cards on hand 
//     a. print the card
// 3. print total cards' count
void Player::print() const {
    cout << mName << endl;
    cout << "=============\n";

    for (long unsigned i = 0; i < mHand.size(); i++) {
        mHand[i].print();
    }

    cout << "Total: " << count() << endl;
}