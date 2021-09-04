# makefile

main.o: main.cpp LL_new.h
	g++ -c main.cpp

DLL_new.o: LL_new.cpp LL_new.h
	g++ -c LL_new.cpp

main: main.o LL_new.o
	g++ main.o LL_new.o -o main
