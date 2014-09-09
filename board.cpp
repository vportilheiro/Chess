/*      board.cpp
 *
 *      Implementation of the chess board class.
 *
 *      Vasco Portilheiro, 2014
 */

#include <cstddef>
#include "board.h"

Position::Position(char column, short row) {
        this->column = column;
        this->row = row;
}

Board::Board() {
    clear();
    setUpWhitePieces();
    setUpBlackPieces();
}

Board::~Board() {
    delete boardArray[0][0];
}

void Board::clear() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            boardArray[i][j] = NULL;
        }
    }
}

Piece* Board::pieceAt(Position& pos) const {
    return pieceAt(pos.column, pos.row);
}

Piece* Board::pieceAt(char column, short row) const {
    return boardArray[8 - row][column - 'a'];
}

void Board::move(const Position& start, const Position& end) {
    boardArray[8 - end.row][end.column - 'a'] = boardArray[8 - start.row][start.column - 'a'];
    boardArray[8 - start.row][start.column - 'a'] = NULL;
}

void Board::setUpBlackPieces() {
    for (int i = 0; i < 8; ++i) {
        boardArray[1][i] = new Pawn(black);
    }
    boardArray[0][0] = new Rook(black);
    boardArray[0][1] = new Knight(black);
    boardArray[0][2] = new Bishop(black);
    boardArray[0][3] = new Queen(black);
    boardArray[0][4] = new King(black);
    boardArray[0][5] = new Bishop(black);
    boardArray[0][6] = new Knight(black);
    boardArray[0][7] = new Rook(black);
}

void Board::setUpWhitePieces() {
    for (int i = 0; i < 8; ++i) {
        boardArray[6][i] = new Pawn(white);
    }
    boardArray[7][0] = new Rook(white);
    boardArray[7][1] = new Knight(white);
    boardArray[7][2] = new Bishop(white);
    boardArray[7][3] = new Queen(white);
    boardArray[7][4] = new King(white);
    boardArray[7][5] = new Bishop(white);
    boardArray[7][6] = new Knight(white);
    boardArray[7][7] = new Rook(white);
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
            if (board.pieceAt('a' + j, 8 - i) != NULL) {
                piece = board.pieceAt('a' + j, 8 - i)->getChar();
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
