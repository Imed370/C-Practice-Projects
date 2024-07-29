# Define the compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: data-types

data-types: data-types.o
	@echo "Linking and producing final executable"
	$(CC) $(CFLAGS) data-types.o -o data-types

data-types.o: data-types.c
	@echo "Compiling main file"
	$(CC) $(CFLAGS) -c data-types.c -o data-types.o

clean:
	@echo "Removing build"
	@rm -f data-types.o data-types
