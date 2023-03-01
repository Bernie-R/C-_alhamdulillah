all: main.o Game.o
	g++ main.o Game.o -o main

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

clean:
	rm *.o main