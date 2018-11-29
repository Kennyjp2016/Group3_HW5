SHELL = /bin/bash
CC = g++
CFLAGS = -g -Wall
OUTP = main.o theater.o util.o weather.o

runMe: $(OUTP)
	g++ $(CFLAGS) -o runMe $(OUTP)

main.o: main.cpp questions.h util.h
	g++ -c main.cpp

theater.o: theater.cpp util.h
	g++ -c theater.cpp

weather.o: weather.cpp util.h
	g++ -c weather.cpp

speakers.o: speakers.cpp util.h
	g++ -c speakers.cpp

util.o: util.cpp
	g++ -c util.cpp

clean:
	rm runMe $(OUTP)
