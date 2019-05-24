//
// Created by a27stude on 16.04.19.
//

#include <algorithm>
#include "Game.h"

Game::Game(unsigned boardSize)
    : gameBoard(boardSize)
    , snake({static_cast<int>(boardSize/2), static_cast<int>(boardSize/2)}, Direction::RIGHT)
{}

bool Game::snakeWallColision(Point expectedMove) const
{
    return !(expectedMove.x >= 0 && expectedMove.x < gameBoard.getSize()
             && expectedMove.y >= 0 && expectedMove.y < gameBoard.getSize());
}

bool Game::snakeSelfColision(Point expectedMove) const
{
   const auto & snakeRef = snake.getSnakeBody();
   auto found = std::find(std::begin(snakeRef),
           std::end(snakeRef)-1, expectedMove);
    return !(found == std::end(snakeRef));


}


