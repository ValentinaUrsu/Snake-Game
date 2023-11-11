
#pragma once
#include <deque>
#include "point.hpp"
#include "direction.hpp"

class Snake {
public:
    std::deque<Point> body;
    Direction direction;

    Snake(int startX, int startY);
    void move();
    void grow();
};
