#include "Cell.h"

Cell::Cell(bool state) : m_state(state) {}

bool Cell::is_alive() const {
    return m_state;
}

void Cell::set_state(bool state) {
    m_state = state;
}