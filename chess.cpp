/*      chess.cpp
 *
 *      Implementation of the Chess class.
 *
 *      Vasco Portilheiro, 2014
 */

#include "chess.h"

Chess::Chess() {

}

Chess::~Chess() {

}

bool Chess::isValidMove(Position& start, Position& end) {
//    std::string name = board.pieceAt(start)->getChar();
    return false; 
}

bool Chess::isValidMove(std::string moveString) {
    return true;
}

void Chess::move(std::string move) {
    char startCol = move[0];
    int startRow = move[1] - '0';
    char endCol = move[2];
    int endRow = move[3] - '0';
    std::cout << "Moving from " << startCol << startRow << " to " << endCol << endRow << std::endl;
    board.move(Position(startCol, startRow), Position(endCol, endRow));
}

/* ===== Operators ===== */

std::ostream& operator <<(std::ostream& out, const Chess &game) {
    out << game.board;
}
