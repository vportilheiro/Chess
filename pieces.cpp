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
