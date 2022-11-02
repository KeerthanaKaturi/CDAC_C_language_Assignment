# Makefile for Q1

CC = gcc

q1ab_test: q1a.o q1b.o
	$(CC) -o q1ab_test q1a.o q1b.o

q1a.o: q1a.c
	$(CC) -c -o q1a.o q1a.c 

q1b.o: q1b.c 
	$(CC) -c -o q1b.o q1b.c

clean:
	rm -rf *.o q1ab_test