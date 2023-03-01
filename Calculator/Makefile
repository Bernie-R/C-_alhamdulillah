all: main.o Calculator.o calc_function.o
	g++ main.o Calculator.o calc_function.o -o main

main.o: main.cpp
	g++ -c main.cpp

Calculator.o: Calculator.cpp
	g++ -c Calculator.cpp

calc_functions.o: calc_function.cpp
	g++ -c calc_function.cpp

clean:
	rm *.o main