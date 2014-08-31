/*      pieces.h
 *
 *      This is the description of both a general "piece" class, and all
 *  relevant subclasses for different types of pieces.
 *
 *      Vasco Portilheiro, 2014
 */

#include <iostream>
#include <string>

enum Color {white = 0,
            black};

class Piece {
public:
    Piece();
    ~Piece();

    virtual bool canMoveTo(char newColumn, short newRow) = 0;
    virtual bool canTakeOn(char newColumn, short newRow) = 0;
    friend std::ostream& operator<<(std::ostream &out, const Piece &piece);

protected:
    std::string name;
    Color color;
    char column;
    short row;
};

class Pawn : public Piece {
public:
    Pawn();
    ~Pawn();

    virtual bool canMoveTo(char newColumn, short newRow);
}
