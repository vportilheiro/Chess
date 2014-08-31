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

bool Chess::isValidMove(std::string move) {
    return true;
}

void Chess::move(std::string move) {

}

/* ===== Operators ===== */
ostream& operator <<(ostream& out, const Chess &game) {
    cout << board;
}
