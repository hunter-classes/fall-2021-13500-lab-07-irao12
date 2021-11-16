main: main.o funcs.o
	g++ -std=c++11 -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -std=c++11 -o tests tests.o funcs.o

main.o: main.cpp funcs.h
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp
	g++ -std=c++11 -c tests.cpp

funcs.o: funcs.cpp funcs.h
	g++ -std=c++11 -c funcs.cpp

clean: #Edited by Ellen
	rm *.o fixed-bad-code.cpp fixed-bad-code2.cpp
