#include "game_engine.hpp"
#include "painter.hpp"
#include <iostream>

int main() {
    const int width = 20;
    const int height = 10;

    GameEngine game(width, height);
    Painter::draw(game);

    char input;
    while (true) {
        std::cin >> input;

        switch (input) {
            case 'w':
                game.update(Direction::UP);
                break;
            case 's':
                game.update(Direction::DOWN);
                break;
            case 'a':
                game.update(Direction::LEFT);
                break;
            case 'd':
                game.update(Direction::RIGHT);
                break;
            case 'q':
                return 0;
        }

        Painter::draw(game);

        if (game.checkCollision()) {
            std::cout << "Game Over! Your score: " << game.score << std::endl;
            return 0;
        }
    }

    return 0;
}
