FLAGS = -Wall -ansi -pedantic
all:
	g++ $(FLAGS) -c	Cylindre.cpp
	g++ $(FLAGS) -c Point.cpp
	g++ $(FLAGS) -o sided sided.cpp *.o
