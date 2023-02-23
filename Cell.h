#ifndef CELL_H
#define CELL_H

// Cell Header File

class Cell {
public:
    Cell(bool state = false);
    bool is_alive() const;
    void set_state(bool state);
private:
    bool m_state;
};

#endif
