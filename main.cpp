#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <unistd.h>

static const int HEIGHT = 20;
static const int WIDTH = 12;

int field[HEIGHT][WIDTH];

void frame() {
    std::fill(&field[0][0], &field[0][0] + HEIGHT * WIDTH, 0);

    for (int i = 0; i < HEIGHT; ++i) {
        field[i][0] = 1;
        field[i][WIDTH - 1] = 1;
    }

    for (int i = 0; i < WIDTH; ++i) {
        field[HEIGHT - 1][i] = 1;
    }
}

void display() {
    system("clear");

    std::cout << "\n\n\n";
    
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            if (field[i][j] == 1) {
                std::cout << " ■";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    while (true) {
        frame();
        display();

        usleep(1000000);
    }

    return 0;
}