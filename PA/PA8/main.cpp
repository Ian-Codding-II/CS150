/**
 * @file main.cpp
 * @author Ian Codding II, Balin Becker, Ryan Flores
 * @brief This is a program that simulates the game of Battleship.
 * @version 0.1
 * @date 2025-04-02
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "battleship.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;

int main()
{
    Inputs input;
    // Opens an output file battleship.log for writing;
    ofstream battleLog;
    battleLog.open("battleship.log");

    srand(time(NULL));

    while (1) {
    begining:
        int menuOption = 0;
        int MenuLength = (sizeof(MENU)/sizeof(MENU[0]));
        displayMenu(MENU, MenuLength, 3, menuOption);

        // Display menu for who to play
        switch (menuOption) {
            case 1: {   // Play Computer
                Board CPU;
                Board Player;

                RandomShipPlace(CPU);
                CPU.display(true);

                int PlacementOption = 0;
                int PlaceOpLength = (sizeof(placeShipOption)/sizeof(placeShipOption[0]));
                displayMenu(placeShipOption, PlaceOpLength, 3, PlacementOption);

                switch (PlacementOption) {
                    case 1: {
                        ManualShipPlace(Player);
                        break;
                    }

                    case 2: {
                        RandomShipPlace(Player);
                        Player.display(true);
                        break;
                    }

                    default: {
                        goto begining;
                    }
                }

                computerGame(battleLog, CPU, Player);
                break;
            }
            case 2: {   
                Board Player1;
                Board Player2;

                // Play Friend
                // Determine who starts
                bool player = selectWhoStartsFirst(2);
                bool forGoto = true;
                cout << "player " << 1 + player << " has been randomly selected to go first.\n\n";
            start: cout << "Player " << 1+player << "\n";

                input.waitForEnter();
                forGoto ? cin.get() : forGoto;
                
                int PlacementOption = 0;
                int PlaceOpLength = (sizeof(placeShipOption)/sizeof(placeShipOption[0]));
                displayMenu(placeShipOption, PlaceOpLength, 3, PlacementOption);
            

                switch (PlacementOption) {
                    case 1: {
                        ManualShipPlace(player ? Player2 : Player1);
                        
                        input.waitForEnter();

                        system("clear");
                        if (forGoto) {
                            forGoto = !forGoto;
                            player = !player;
                            goto start;
                        }
                        break;
                    }

                    case 2: {
                        RandomShipPlace(player ? Player2 : Player1);
                        player ? Player2.display(true) : Player1.display(true);
                                        
                        input.waitForEnter();

                        system("clear");
                        if (forGoto) {
                            forGoto = !forGoto;
                            player = !player;
                            goto start;
                        }
                        break;
                    }

                    default: {
                        goto begining;
                    }
                }
                player = !player;
                playerGame(battleLog, Player1, Player2, player);
                break;
            }
            case 3: {   // Rules Menu
                int rulesOption = 1;
                int RulesLength = (sizeof(RULES)/sizeof(RULES[0]));
                displayMenu(RULES, RulesLength, 0, rulesOption);
                switch (rulesOption) {
                    case 0:
                        break;
                }
                break;
            }
            case 0: {
                // Closes the log file
                battleLog.close();
                // music.stop();
                system("clear");

                return 0;
            }
        }        
    }
        
    return 0;
}