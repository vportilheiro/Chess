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
    friend std::ostream& operator<<(std::ostream &out, const Piece &piece);

protected:
    std::string name;
    Color color;
};

class Pawn : public Piece {
public:
    Pawn();
    ~Pawn();
}
