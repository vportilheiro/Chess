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

Pawn::Pawn(Color color) {
    name = "pawn";
    this->color = color;
}

Pawn::~Pawn() {}

char Pawn::getChar() const {
    switch (color) {
        case white:
            return 'P';
            break;
        case black:
            return 'p';
            break;
        default:
            return -1;
    }
}
