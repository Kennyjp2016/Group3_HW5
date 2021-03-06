SHELL = /bin/bash
CC = g++
CFLAGS = -g -Wall
OUTP = main.o theater.o util.o weather.o EncodeDecode.o Jokes.o

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

EncodeDecode.o: EncodeDecode.cpp util.h
	g++ -c EncodeDecode.cpp

Jokes.o: Jokes.cpp util.h
	g++ -c Jokes.cpp

util.o: util.cpp
	g++ -c util.cpp

clean:
	rm runMe $(OUTP)
