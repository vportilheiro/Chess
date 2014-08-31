/*      pieces.cpp
 *
 *      Implements the classes encapsulating chess pieces
 *
 *      Vasco Portilheiro, 2014
 */

#include "pieces.h"

Piece::Piece() {}
Piece::~Piece() {}

std::ostream& operator <<(std::ostream &out, const Piece &piece) {
    out << piece.name;
}

Pawn::Pawn() {
    name = "pawn";
}
Pawn::~Pawn() {}

bool Pawn::canMoveTo(char newColumn, short newRow) {
    if (newRow == (row + 1)) return true;
    if (color == white && row == 2 && newRow == 4) return true;
    if (color == black && row == 7 && newRow == 5) return true;
    return false;
}
