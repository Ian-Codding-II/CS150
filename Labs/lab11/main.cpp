/**
 * @file main.cpp
 * @author Ian Codding II
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include <iostream>

using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    const int MAX_PLAYERS = 6;
    int numPlayers = 0; 
    while (1)
    {
        cout << "How many players? ";
        cin >> numPlayers;
        if (numPlayers >= 1 && numPlayers <= MAX_PLAYERS)
        {
            break;
        }
        cout << "Invalid! Valid values are 1 to " << MAX_PLAYERS << ". ";
    }
    
    // Create a vector of Player objects/instances called players with size equal to number of players
    vector<Player> players(numPlayers);

    // NOTE: This means index 0 is player 1, index 1 is player 2, so on...
    
    string name = "";
    // Loop through each player
    // a. Prompt user to enter player's name
    // b. Set player's name in the vector of Player objects
    for (int i = 0; i < numPlayers; i++) {
        cout << "Enter name for player " << i +1 << ": ";
        cin >> name;
        players[i].setName(name);
    }

    // Create an instance of the Deck class
    Deck deck;

    char repeat = 'Y';
    while (repeat == 'Y' || repeat == 'y')
    {
        cout << "\n\nDealing two cards to each player\n\n";
        // Loop through each player
        for (int i = 0; i < numPlayers; i++) {
            // Create a new hand for the player
            players[i].newHand(deck);
        }

        // Create a vector of integers called playerScores to store each player's score,
        // each element in this vector should have an initial value of 0
        vector<int>playerScores(numPlayers, 0);

        // Variable to keep track of the highest score, set initially to 0
        int highestScore = 0;
        
        // Loop through each player
        for(int i = 0; i < numPlayers; i++) {
            // Print player's hand
            players[i].print();
            // Compute player's score
            int s = players[i].count();
            // if player's score is over 21
            if (s > 21) {
                // Prompt player "It's a bust! Better luck next time =(" and 
                cout << "It's a bust! Better luck next time =(\n\n";
                // Go to next player
                continue;
            } else if (s == 21) { // else if player's score is 21, 
                // Update the player's score in the playerScores vector 
                playerScores[i] = s;
                // Set highest score to 21
                highestScore = s;
                // Prompt player "You got a Blackjack!!!" and 
                cout << "You got a Blackjack!!!";
                // Go to next player
                continue;
            } else { // else, 
                char input;
                // Ask player whether to "stand" (not ask for another card) or "hit" (ask for another card)
                cout << "Hit or Stand (Enter H or S)? ";
                cin >> input;
                cout << endl;
                if (input == 'S' || input == 's') { // if stand, 
                    // Update the player's score in the playerScores vector and,
                    playerScores[i] = s;
                    if (highestScore < s) { // if player's score is bigger than current highest score, update the highest score
                        highestScore = s;
                    }
                    // Go to next player
                    continue;
                } else if (input == 'H' || input == 'h') { // if hit, 
                    // get a card from the deck and add to player's hand. then loop back
                    players[i].hitCard(deck);
                    i--;
                }
            }
        }
        
        if (highestScore == 0) {
            cout << "No winner!\n";
        } else {
            cout << "\nWinner(s) of the BlackJack Game:\n";
            // Loop through the playerScores vector
            for (int i = 0; i < numPlayers; i++) {
                // if player's score is equal to the highest score
                if (players[i].count() == highestScore) {
                    // Print out the player's name
                    cout << players[i].getName();
                    cout << endl;
                }
            }
        }
               
        // Reset the deck for a new game
        deck.reset();

        cout << "Play again? [Y / N]: ";
        cin >> repeat;
    }

    return 0;
}

// int main()
// {
//     // Create an instance of the Deck class 
//     Deck deck;   

//     cout << "Random Cards:\n";
//     cout << "============\n";
//     // loop 7 times
//     for (int i = 0; i < 7; i++)
//     {
//         //     deal a random card from the deck
//         Card c = deck.dealCard();

//         //     print the card's face value
//         c.print();
//     }
    
//     cout << "\n\nList of Cards Dealt from the Deck:\n";
//     cout << "============\n";
//     // call Deck's appropriate member function to print out this list
//     deck.printDealtDeck();

//     cout << "\n\nList of Cards Remaining in the Deck:\n";
//     cout << "============\n";
//     // call Deck's appropriate member function to print out this list
//     deck.printUndealtDeck();
    
//     cout << "Press enter to continue...\n";
//     cin.get();
    
//     // reset the Deck
//     deck.reset();
    
//     cout << "\n\nList of Cards in the Deck:\n";
//     cout << "============\n";
//     // call Deck's appropriate member function to print out this list
//     deck.printUndealtDeck();

//     return 0;
// }

/**
//  * @file main.cpp
//  * @author Ian Codding II
//  * @brief 
//  * @version 0.1
//  * @date 2025-04-10
//  * 
//  * @copyright Copyright (c) 2025
//  * 
//  */
// #include "card.hpp"
// #include <iostream>

// using namespace std;

// int main()
// {
//     // loop 52 times to print out all cards in a standard deck
//     //     Create an instance of the Card class
//     //     set the card object to the counter by calling the appropriate Card member function
//     //     print the card by calling the appropriate Card member function
//     for (int i = -1; i < 52; i++)
//     {
//         Card currentCard;
//         currentCard.setValue(i);
//         currentCard.print();
//     }

//     return 0;
// }