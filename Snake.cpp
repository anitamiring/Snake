//
// Created by a27stude on 16.04.19.
//

#include "Snake.h"

void Snake::growSnake(Point apple)
{
    snakeBody.push_front(apple);
}

void Snake::changeDirection(Direction newDirection)
{
    currentDirection = newDirection;
}

void Snake::moveSnake(Point newHead)
{
    snakeBody.pop_back();
    snakeBody.push_front(newHead);
}

Snake::Snake(Point p, Direction startDir) : currentDirection(startDir)
{
    snakeBody.push_back(p);
}

const std::deque<Point> &Snake::getSnakeBody() const
{
    return snakeBody;
}

Point Snake::expectedHeadPosition()const
{
    Point newHead = snakeBody.front();
    switch (currentDirection)
    {
        case Direction::UP:
            newHead.y--;
            break;
        case Direction::DOWN:
            newHead.y++;
            break;
        case Direction::RIGHT:
            newHead.x++;
            break;
        case Direction::LEFT:
            newHead.x--;
            break;
    }
    return newHead;
}
