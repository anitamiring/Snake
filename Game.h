//
// Created by a27stude on 16.04.19.
//

#ifndef DOJO5_GAME_H
#define DOJO5_GAME_H


#include "Board.h"

class Game
{
public:
    Game(unsigned boardSize);
    bool snakeSelfColision(Point expectedMove) const;
    bool snakeWallColision(Point expectedMove) const;

private:
    Board gameBoard;
    Snake snake;
};


#endif //DOJO5_GAME_H
