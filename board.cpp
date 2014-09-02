/*      board.cpp
 *
 *      Implementation of the chess board class.
 *
 *      Vasco Portilheiro, 2014
 */

#include <cstddef>
#include "board.h"

Board::Board() {
    //populateBoard();
    boardArray[0][0] = new Pawn();
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
            std::string pieceString = " ";
            if (board.pieceAt(8 - i, 'a' + j)) pieceString = board.pieceAt(8 - i, 'a' + j)->getName();
            out << " " << pieceString << " |";
        }
        out << std::endl;
        out << "|";
        for (int j = 0; j < 8; ++j) {
            out << "___|";
        }
        out << std::endl;
    }
}
