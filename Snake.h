//
// Created by a27stude on 16.04.19.
//

#ifndef DOJO5_SNAKE_H
#define DOJO5_SNAKE_H


#include <deque>
#include "Point.h"

enum class Direction{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Snake
{
public:
    Snake(Point p, Direction startDir);
    void growSnake(Point apple);
    void changeDirection(Direction newDirection);
    void moveSnake(Point newHead);
    Point expectedHeadPosition() const;


    const std::deque<Point>& getSnakeBody() const;


private:
    std::deque<Point> snakeBody;
    Direction currentDirection;
};


#endif //DOJO5_SNAKE_H
