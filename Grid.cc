#include "Grid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Grid::Grid(int rows, int cols) : m_rows(rows), m_cols(cols) {
    m_grid = new Cell*[m_rows];
    for (int i = 0; i < m_rows; i++) {
        m_grid[i] = new Cell[m_cols];
    }
}

Grid::~Grid() {
    for (int i = 0; i < m_rows; i++) {
        delete[] m_grid[i];
    }
    delete[] m_grid;
}

void Grid::randomize() {
    srand(time(0));
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            m_grid[i][j].set_state(rand() % 2);
        }
    }
}

void Grid::update() {

// Hard Part

// Check for rule states in grid, update appropriately
// Ex: m_grid[i][j].is_alive()

}

