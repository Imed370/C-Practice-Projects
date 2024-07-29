# Define the compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: main

main: main.o
	@echo "Linking and producing final executable"
	$(CC) $(CFLAGS) main.o -o main

main.o: main.c
	@echo "Compiling main file"
	$(CC) $(CFLAGS) -c main.c -o main.o

clean:
	@echo "Removing build"
	@rm -f main.o main
