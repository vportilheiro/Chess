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

struct Move {
    Position start;
    Position end;
    Move(std::string);
    Move(char startColumn, short startRow, char endColumn, short endRow);
};

class Chess {
public:

    Chess();
    ~Chess();

    bool isValidMove(const Position& start, const Position& end);
    bool isValidMove(const Move& move);
    bool isValidMove(std::string move);
    void move(const Move& move);
    friend std::ostream& operator <<(std::ostream& out, const Chess& game);

private:

   Board board;
};

#endif

