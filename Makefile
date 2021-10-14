main: main.o funcs.o
	g++ -std=c++11 -o main main.o funcs.o

tests: test.o funcs.o
	g++ -std=c++11 -o tests test.o funcs.o

main.o: main.cpp funcs.h
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp
	g++ -std=c++11 -c tests.cpp

funcs.o: funcs.cpp funcs.h
	g++ -std=c++11 -c funcs.cpp

clean:
	rm *.o
