a.out: searcher.o main.o
	g++ -o REDDI searcher.o main.o
searcher: searcher.cpp searcher.h
	g++ -c searcher.cpp
main: main.cpp
	g++ -c main.cpp