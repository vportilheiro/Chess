/*      pieces.h
 *
 *      This is the description of both a general "piece" class, and all
 *  relevant subclasses for different types of pieces.
 *
 *      Vasco Portilheiro, 2014
 */

#include <iostream>
#include <set>
#include <string>

enum Color {white,
            black};

/* Describes "how" a piece is allowed to move, in terms of directions.
 * This is useful because it allows for the Pieces to be able to contain
 * information of their allowable moves without access to any specific board.
 * Note that a MoveVector is "scalable" if the piece could potentially move
 * any number of squares in the valid direction (such as a bishop along
 * a diagonal). */
struct MoveVector {
    int rowShift;
    int colShift;
    bool scalable;
    MoveVector(int rowShift, int colShift, bool scalable);
};

/* Describes a piece, which consists of itself, its color, and its valid
 * MoveVectors. */
class Piece {
public:
    Piece();
    Piece(Color color);
    ~Piece();
    virtual char getChar() const = 0;
    virtual const std::set<MoveVector>& moveVectors() const = 0;
    friend std::ostream& operator<<(std::ostream &out, const Piece &piece);

protected:
    std::string name;
    Color color;
};

class Pawn : public Piece {
public:
    Pawn(Color color);
    ~Pawn();
    virtual char getChar() const;
    virtual const std::set<MoveVector>& moveVectors() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

class Rook : public Piece {
public:
    Rook(Color color);
    ~Rook();
    virtual char getChar() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

class Knight : public Piece {
public:
    Knight(Color color);
    ~Knight();
    virtual char getChar() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

class Bishop : public Piece {
public:
    Bishop(Color color);
    ~Bishop();
    virtual char getChar() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

class Queen : public Piece {
public:
    Queen(Color color);
    ~Queen();
    virtual char getChar() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

class King : public Piece {
public:
    King(Color color);
    ~King();
    virtual char getChar() const;
private:
    static const std::set<MoveVector> moveVectorSet;
};

