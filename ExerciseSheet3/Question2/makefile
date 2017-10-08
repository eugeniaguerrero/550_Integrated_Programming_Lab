execute: main.o conversions.o
	g++ -g main.o conversions.o -o execute

main.o: main.cpp conversions.h
	g++ -Wall -g -c main.cpp

averages.o: conversions.cpp conversions.h
	g++ -Wall -g -c conversions.cpp

clean:
	rm -f *.o execute