#include <gtest/gtest.h>
#include "Snake.h"

using namespace testing;

class SnakeTest : public ::testing::Test
{
public:
    SnakeTest() : uut({5,5}, Direction::RIGHT) {}

    Snake uut;
};

TEST_F(SnakeTest, creation_of_snake_OK)
{
    std::deque<Point> result{Point{5,5}};
    ASSERT_EQ(result, uut.getSnakeBody());
}

TEST_F(SnakeTest, is_snake_moving_as_supposed){
    uut.moveSnake(uut.expectedHeadPosition());
    std::deque<Point> result{Point{6,5}};
    ASSERT_EQ(result, uut.getSnakeBody());
}

TEST_F(SnakeTest, change_direction){
    uut.changeDirection(Direction::UP);
    uut.moveSnake(uut.expectedHeadPosition());
    std::deque<Point> result{Point{5,4}};
    ASSERT_EQ(result, uut.getSnakeBody());
}

TEST_F(SnakeTest, snake_grow_OK){
    uut.growSnake(uut.expectedHeadPosition());
    std::deque<Point> result{{6,5},{5,5}};
    ASSERT_EQ(result, uut.getSnakeBody());
}