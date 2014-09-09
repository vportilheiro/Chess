/*      chess.cpp
 *
 *      Implementation of the Chess class.
 *
 *      Vasco Portilheiro, 2014
 */

#include "chess.h"

Move::Move(std::string move) : start(move[0], move[1] -'0'), end(move[2], move[3] - '0') {}

Chess::Chess() {

}

Chess::~Chess() {

}

bool Chess::isValidMove(const Position& start, const Position& end) {
    if(!( ('a' <= start.column) && (start.column <= 'h') ) ||
       !( (1 <= start.row) && (start.row <= 8) ))
        return false;
    if(!( ('a' <= end.column) && (end.column <= 'h') ) ||
       !( (1 <= end.row) && (end.row <= 8) ))
        return false;
}

bool Chess::isValidMove(const Move& move) {
    return isValidMove(move.start, move.end);
}

bool Chess::isValidMove(std::string move) {
    if (move.length() != 4) return false;
    return isValidMove(Move(move));
}

void Chess::move(const Move& move) {
    board.move(move.start, move.end);
}

/* ===== Operators ===== */

std::ostream& operator <<(std::ostream& out, const Chess &game) {
    out << game.board;
}
