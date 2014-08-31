/*      board.h
 *
 *      The class containing most of the game-state information, as a board.
 *
 *      Vasco Portilheiro, 2014
 */
#ifndef _BOARD_H_
#define _BOARD_H_

#include <iostream>
#include "pieces.h"

class Board {
public:

    Board();
    ~Board();

    bool isValidMove(Position initPos, Position endPos);
    Piece* pieceAt(Position pos);
    void move(Piece* piece, Position endPos);

    friend std::ostream& operator <<(std::ostream &out, const Board &board);

private:

    /* Data structure containing pointers to pieces */
    Piece[64] boardArray;

    struct Position {
        char row;
        short column;
    };
};

std::ostream& operator <<(std::ostream &out, const Board &board) {
    out << "This is a board." << std::endl;
}


#endif
