/*      board.cpp
 *
 *      Implementation of the chess board class.
 *
 *      Vasco Portilheiro, 2014
 */

#include <cstddef>
#include "board.h"

Board::Board() {
    
    /* Make sure that the memory is cleared */
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            boardArray[i][j] = NULL;
        }
    }

    boardArray[0][0] = new Pawn(white);
}

Board::~Board() {
    delete boardArray[0][0];
}

Piece* Board::pieceAt(Position& pos) const {
    return pieceAt(pos.column, pos.row);
}

Piece* Board::pieceAt(char column, short row) const {
    return boardArray[column - 'a'][row - 1];
}

void Board::move(Position& start, Position& end) {

}

std::ostream& operator <<(std::ostream& out, const Board& board) {
    /* Top edge */
    for (int i = 0; i < 8; ++i) {
        out << " ___";
    }
    out << std::endl;

    /* Rows */
    for (int i = 0; i < 8; ++i) {
        out << "|";
        for (int j = 0; j < 8; ++j) {
            out << "   |";
        }
        out << std::endl;
        out << "|";
        for (int j = 0; j < 8; ++j) {
            char piece = ' ';
            if (board.pieceAt('a' + j, 1 + i) != NULL) {
                piece = board.pieceAt('a' + j, 1 + i)->getChar();
            }
            out << " " << piece << " |";
        }
        out << std::endl;
        out << "|";
        for (int j = 0; j < 8; ++j) {
            out << "___|";
        }
        out << std::endl;
    }
}
