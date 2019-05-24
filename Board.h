//
// Created by a27stude on 16.04.19.
//

#ifndef DOJO5_BOARD_H
#define DOJO5_BOARD_H


#include "Point.h"
#include "Snake.h"

class Board
{
public:
    Board(unsigned newSize);
    void printBoard();

    unsigned getSize() const;

private:
    Point apple;
    unsigned size;
};


#endif //DOJO5_BOARD_H
