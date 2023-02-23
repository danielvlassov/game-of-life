#include "Grid.h"

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

    // Create a new grid to store the updated values
    Cell** new_grid = new Cell*[m_rows];
    for (int i = 0; i < m_rows; i++) {
        new_grid[i] = new Cell[m_cols];
    }
    // Update each cell in the new grid
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            int neighbors = 0;
            // Check the 8 cells around the current cell
            for (int k = -1; k <= 1; k++) {
                for (int l = -1; l <= 1; l++) {
                    // Make sure we're not checking the current cell
                    if (k != 0 || l != 0) {
                        // Check if the neighbor is alive
                        if (m_grid[(i + k + m_rows) % m_rows][(j + l + m_cols) % m_cols].is_alive()) {
                            neighbors++;
                        }
                    }
                }
            }
            // Update the cell's state
            if (m_grid[i][j].is_alive()) {
                if (neighbors < 2 || neighbors > 3) {
                    new_grid[i][j].set_state(false);
                } else {
                    new_grid[i][j].set_state(true);
                }
            } else {
                if (neighbors == 3) {
                    new_grid[i][j].set_state(true);
                } else {
                    new_grid[i][j].set_state(false);
                }
            }
        }
    }
    // Delete the old grid
    for (int i = 0; i < m_rows; i++) {
        delete[] m_grid[i];
    }
    delete[] m_grid;
    // Set the old grid to the new grid
    m_grid = new_grid;
}

void Grid::print() const {
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            if (m_grid[i][j].is_alive()) {
                std::cout << "X";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

