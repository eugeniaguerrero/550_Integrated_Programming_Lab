execute: main.o statistics.o
	g++ -g main.o statistics.o -o execute

main.o: main.cpp statistics.h
	g++ -Wall -g -c main.cpp

statistics.o: statistics.cpp statistics.h
	g++ -Wall -g -c statistics.cpp

clean:
	rm -f *.o execute