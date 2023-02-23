all: game_of_life

game_of_life: GameOfLife.o main.o Cell.o Grid.o 
	g++ -Wall -o game_of_life GameOfLife.o main.o Cell.o Grid.o

GameOfLife.o: GameOfLife.cc
	g++ -c GameOfLife.cc

Cell.o: Cell.cc
	g++ -c Cell.cc

Grid.o: Grid.cc
	g++ -c Grid.cc

main.o: main.cc
	g++ -c main.cc

clean:
	rm -f *.o game_of_life