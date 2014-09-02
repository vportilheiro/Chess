/*      Chess/main.cpp
 *
 *      The main program using the chess class to run a chess game.
 *
 *      Vasco Portilheiro, 2014.
 */

#include <iostream>
#include <string>
#include "chess.h"

/* ===== Constants ===== */
const std::string QUIT = "quit";

/* ===== Function prototypes ===== */

/* Display */
void displayGreeting();
void displayEndOfProgram();

/* User-action */
std::string promptForMove(std::string prompt= "");


/* ===== Main program ===== */

int main() {

    displayGreeting();

    Chess game;

    while (true) {
        std::cout << game << std::endl;
        std::string move = promptForMove("Move: ");
        if (move == QUIT) break;
        if (game.isValidMove(move)) {
            game.move(move);
        } else {
            std::cout << "Invalid move!" << std::endl;
        }
    }
    
    displayEndOfProgram();
    return 0;
}

void displayGreeting() {
    std::cout << "Welcome to Chess!" << std::endl;
}

void displayEndOfProgram() {
    std::cout << "Thanks for playing!" << std::endl;
}

std::string promptForMove(std::string prompt) {
    std::string move;
    std::cout << prompt << std::flush;
    std::cin >> move;
    return move;
}
