/*      chess.cpp
 *
 *      Implementation of the Chess class.
 *
 *      Vasco Portilheiro, 2014
 */

#include "chess.h"

Chess::Chess() {

}

Chess::~Chess() {

}

bool Chess::isValidMove(Position& start, Position& end) {
    return true;
}

bool Chess::isValidMove(std::string moveString) {
    return true;
}

void Chess::move(std::string move) {

}

/* ===== Operators ===== */
std::ostream& operator <<(std::ostream& out, const Chess &game) {
    out << "This is the game";
}
