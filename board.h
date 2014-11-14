/*      board.h
 *
 *      The class containing most of the game-state information, as a board.
 *      Provides methods to modify the state of the board, setting up either
 *      color pieces, executing a move, and clearing the board. also provides
 *      methods to check whether any given Position is in-bounds, and to move
 *      a piece from one Position to another.
 *      The board itself is stored as a two dimensional array containing
 *      pointers to Piece objects.
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
    Position(char column, short row);
};

class Board {
public:

    Board();
    ~Board();
    
    void clear();
    Piece* pieceAt(const Position& pos) const;
    Piece* pieceAt(char column, short row) const;
    void move(const Position& start, const Position& end);
    void setUpWhitePieces();
    void setUpBlackPieces();
    bool isInBounds(const Position& pos);

    friend std::ostream& operator <<(std::ostream& out, const Board& board);

private:

    /* Data structure containing pointers to pieces */
    Piece* boardArray[8][8];

};

#endif
