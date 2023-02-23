#include "GameOfLife.h"

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns for the grid: ";
    std::cin >> rows >> cols;
    // Pass to GameOfLife constructor
    GameOfLife game(rows, cols);
    game.run();
    return 0;
}
