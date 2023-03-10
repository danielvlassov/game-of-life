#ifndef GAMEOFLIFE_H
#define GAMEOFLIFE_H

// GameOfLife Header File

#include "Grid.h"
#include <chrono>
#include <thread>

class GameOfLife {
public:
    GameOfLife(int rows, int cols);
    void run();
private:
    Grid m_grid;
};

#endif 
