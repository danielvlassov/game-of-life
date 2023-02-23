#ifndef GRID_H
#define GRID_H

// Grid Header File

#include "Cell.h"

class Grid {
public:
    Grid(int rows, int cols);
    ~Grid();
    void randomize();
    void update();
    void print() const;
private:
    int m_rows;
    int m_cols;
    Cell** m_grid;
};

#endif
