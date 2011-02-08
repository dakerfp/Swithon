
INCLUDES=-I/usr/lib/swipl-5.10.2/include
CC=g++
CFLAGS=-Wall
LIBS=

build: switerm swiatom swithon
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) *.o -o swithon

swithon:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) swithon.cpp -c -o swithon.o

switerm:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) switerm.cpp -c -o switerm.o

swiatom:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) swiatom.cpp -c -o swiatom.o
