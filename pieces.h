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
    Piece(Color color);
    ~Piece();
    virtual char getChar() const = 0;
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
};

class Rook : public Piece {
public:
    Rook(Color color);
    ~Rook();
    virtual char getChar() const;
};

class Knight : public Piece {
public:
    Knight(Color color);
    ~Knight();
    virtual char getChar() const;
};

class Bishop : public Piece {
public:
    Bishop(Color color);
    ~Bishop();
    virtual char getChar() const;
};

class Queen : public Piece {
public:
    Queen(Color color);
    ~Queen();
    virtual char getChar() const;
};

class King : public Piece {
public:
    King(Color color);
    ~King();
    virtual char getChar() const;
};

