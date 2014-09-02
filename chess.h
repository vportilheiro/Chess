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

    bool isValidMove(Position& start, Position& end);
    bool isValidMove(std::string moveString);
    void move(std::string move);
    friend std::ostream& operator <<(std::ostream& out, const Chess& game);

private:

   Board board;
};

#endif

