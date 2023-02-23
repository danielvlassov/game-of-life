#include "GameOfLife.h"
#include <iostream>
#include <chrono>
#include <thread>

GameOfLife::GameOfLife(int rows, int cols) : m_grid(rows, cols) {}

void GameOfLife::run() {
    m_grid.randomize();
    while (true) {
        m_grid.print();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        m_grid.update();
    }
}
