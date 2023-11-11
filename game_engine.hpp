
#pragma once
#include "board.hpp"
#include "snake.hpp"
#include "apple.hpp"

class GameEngine {
public:
    Board board;
    Snake snake;
    Apple apple;
    int score;

    GameEngine(int width, int height);
    void reset();
    void update(Direction dir);
    bool checkCollision();
};
