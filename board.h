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

    Piece* pieceAt(char row, short column);
    void move(Piece* piece, location);

    friend std::ostream& operator <<(std::ostream &out, const Board &board);

private:

    /* Data structure containing pointers to pieces */
    Piece[64] boardArray;
};

std::ostream& operator <<(std::ostream &out, const Board &board) {
    for (int i = 0; i < 8; ++i) {
        out << "- " << out.flush();
    }
    out << std::endl;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            out << pieceAt(


#endif
