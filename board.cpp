/*      board.cpp
 *
 *      Implementation of the chess board class.
 *
 *      Vasco Portilheiro, 2014
 */

#include <cstddef>
#include "board.h"

Board::Board() {}
Board::~Board() {}

Piece* Board::pieceAt(Position& pos) const {
    return NULL;
}

void Board::move(Position& start, Position& end) {

}

std::ostream& operator <<(std::ostream& out, Board& board) {
    out << "This is a board, you fool." << std::flush;
}
