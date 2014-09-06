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

Rook::Rook(Color color) {
    name = "rook";
    this->color = color;
}

char Rook::getChar() const {
    switch (color) {
        case white:
            return 'R';
            break;
        case black:
            return 'r';
            break;
        default:
            return -1;
    }
}

Knight::Knight(Color color) {
    name = "knight";
    this->color = color;
}

char Knight::getChar() const {
    switch (color) {
        case white:
            return 'N';
            break;
        case black:
            return 'n';
            break;
        default:
            return -1;
    }
}

Bishop::Bishop(Color color) {
    name = "bishop";
    this->color = color;
}

char Bishop::getChar() const {
    switch (color) {
        case white:
            return 'B';
            break;
        case black:
            return 'b';
            break;
        default:
            return -1;
    }
}

Queen::Queen(Color color) {
    name = "queen";
    this->color = color;
}

char Queen::getChar() const {
    switch (color) {
        case white:
            return 'Q';
            break;
        case black:
            return 'q';
            break;
        default:
            return -1;
    }
}

King::King(Color color) {
    name = "king";
    this->color = color;
}

char King::getChar() const {
    switch (color) {
        case white:
            return 'K';
            break;
        case black:
            return 'k';
            break;
        default:
            return -1;
    }
}
