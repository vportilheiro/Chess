/*      pieces.cpp
 *
 *      Implements the classes encapsulating chess pieces
 *
 *      Vasco Portilheiro, 2014
 */

#include "pieces.h"

MoveVector::MoveVector(int rowShift, int colShift, bool scalable) {
    this->rowShift = rowShift;
    this->colShift = colShift;
    this->scalable = scalable;
}

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

const std::set<MoveVector> Pawn::moveVectorSet {
    MoveVector(1, 0, false),
    MoveVector(2, 0, false)
};

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

const std::set<MoveVector> Rook::moveVectorSet {
    MoveVector(1, 0, true),
    MoveVector(0, 1, true)
};

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

const std::set<MoveVector> Knight::moveVectorSet {
    MoveVector(-2, -1, false),
    MoveVector(-2, 1, false),
    MoveVector(2, -1, false),
    MoveVector(-2, 1, false),
    MoveVector(-1, -2, false),
    MoveVector(-1, 2, false),
    MoveVector(1, -2, false),
    MoveVector(1, 2, false)
};

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

const std::set<MoveVector> Bishop::moveVectorSet {
    MoveVector(1, 1, true),
    MoveVector(1, -1, true)
};

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

const std::set<MoveVector> Queen::moveVectorSet {
    MoveVector(1, 0, true),
    MoveVector(0, 1, true),
    MoveVector(1, 1, true),
    MoveVector(1, -1, true)
};

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

const std::set<MoveVector> King::moveVectorSet {
    MoveVector(1, 0, false),
    MoveVector(-1, 0, false),
    MoveVector(0, 1, false),
    MoveVector(0, -1, false),
    MoveVector(1, 1, false),
    MoveVector(-1, -1, false),
    MoveVector(1, -1, false),
    MoveVector(-1, 1, false)
};

