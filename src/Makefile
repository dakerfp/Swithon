
INCLUDES=-I/usr/lib/swipl-5.10.2/include
CC=g++
CFLAGS=-Wall
LIBS=

build: switerm switypes swithon
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) *.o -o swithon

swithon:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) swithon.cpp -c -o swithon.o

switerm:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) switerm.cpp -c -o switerm.o

switypes:
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) switypes.cpp -c -o switypes.o
