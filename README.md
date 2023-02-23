# Conway's Game of Life (C++ Implementation)

The [Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) is a cellular automaton devised by John Horton Conway in 1970. 

- It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. 
- One interacts with the Game of Life by creating an initial configuration (in this case, random) and observing how it evolves. 
- This program will update the state of the grid according to the rules of the game and clear the grid to show the next iteration.

## Instructions

1. Compile with: `make` or `make all`
2. Run the program: `./game_of_life`
3. Enter the number of rows and columns of the grid when prompted (space seperated)
4. Watch the game!
5. `Ctrl+C` to exit
6. Run `make clean` to remove the executable and *.o files

## Rules of the Game of Life

- Any live cell with fewer than two live neighbours dies, as if by underpopulation.
- Any live cell with two or three live neighbours lives on to the next generation.
- Any live cell with more than three live neighbours dies, as if by overpopulation.
- Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
