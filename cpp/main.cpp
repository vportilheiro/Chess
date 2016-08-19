/*      Chess/main.cpp
 *
 *      The main program using the chess class to run a chess game.
 *
 *      Vasco Portilheiro, 2014.
 */

#include <iostream>
#include <set>
#include <string>
#include "chess.h"

/* ===== Constants ===== */

/* Greeting displayed on run. */
const std::string GREETING = "*********************\n"
                             "* Welcome to chess! *\n"
                             "*********************";

/* Set containing the string the user may enter to quit. */
const std::set<std::string> QUIT_ACTIONS = {"quit", "q"};


/* ===== Function prototypes ===== */

/* Display */
void displayGreeting();
void displayEndOfProgram();

/* User-action */
std::string promptForMove();

/* Helpers */
bool isQuitAction(std::string action);

/* ===== Main program ===== */

/* Displays the greeting, and then creates an instance of Chess. Then, we loop,
 * asking the user for valid moves and printing the board, until the QUIT
 * sentinel is given. The program then displays a message and exits.*/
int main() {
    displayGreeting();
    Chess game;
    while (true) {
        std::cout << game << std::endl;
        std::string move = promptForMove();
        if (isQuitAction(move)) break;
        if (game.isValidMove(Move(move))) {
            game.move(move);
        } else {
            std::cout << "Invalid move!" << std::endl;
        }
    }
    displayEndOfProgram();
    return 0;
}

/* Displays greeting message on cout. */
void displayGreeting() {
    std::cout << GREETING << std::endl;
}

void displayEndOfProgram() {
    std::cout << "Thanks for playing!" << std::endl;
}

bool isQuitAction(std::string action) {
    return QUIT_ACTIONS.find(action) != QUIT_ACTIONS.end();
}

std::string promptForMove() {
    std::string move;
    std::cout << "Move (";
    for (auto quitAction : QUIT_ACTIONS) {
        std::cout << "or " << quitAction << " ";
    }
    std::cout << "to quit): " << std::flush;
    std::cin >> move;
    return move;
}
