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

struct Position {
    char column;
    short row;
    Position(char c, short r) {
        column = c;
        row = r;
    }
};

class Board {
public:

    Board();
    ~Board();

    Piece* pieceAt(Position& pos) const;
    Piece* pieceAt(char column, short row) const;
    void move(Position& start, Position& end);

    friend std::ostream& operator <<(std::ostream& out, const Board& board);

private:

    /* Data structure containing pointers to pieces */
    Piece* boardArray[8][8];

};

#endif
