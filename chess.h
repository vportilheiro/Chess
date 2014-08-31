/*      chess.h
 *
 *      The description of a chess game.
 *
 *      Vasco Portilheiro, 2014
 */

#ifndef _CHESS_H_
#define _CHESS_H_

#include <iostream>
#include <string>
#include "board.h"

class Chess {
public:

    Chess();
    ~Chess();

    bool isValidMove(std::string move);
    void move(std::string move);
    friend std::ostream& operator <<(ostream& out, const Chess& game);

private:

   Board board;
};

#endif

