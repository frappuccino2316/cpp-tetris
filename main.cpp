#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <unistd.h>

static const int HEIGHT = 20;
static const int WIDTH = 10;

char field[HEIGHT][WIDTH];

void frame() {
    std::fill(&field[0][0], &field[0][0] + HEIGHT * WIDTH, '0');

    for (int i = 0; i < HEIGHT; ++i) {
        field[i][0] = '1';
        field[i][WIDTH - 1] = '1';
    }

    for (int i = 0; i < WIDTH; ++i) {
        field[HEIGHT - 1][i] = '1';
    }
}

int main() {
    while (true) {
        frame();
        system("clear");

        std::cout << "テトリスっぽいゲーム\n";
        
        for (int i = 0; i < HEIGHT; ++i) {
            for (int j = 0; j < WIDTH; ++j) {
                std::cout << field[i][j];
            }
            std::cout << std::endl;
        }

        usleep(1000000);
    }

    return 0;
}