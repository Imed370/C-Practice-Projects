$CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: pointers

main: pointers.o
	echo "Linking and producing final executable"
	$(CC) $(CFLAGS) pointers.o -o pointers

main.o: pointers.c
	echo "Compiling main file"
	$(CC) $(CFLAGS) -c pointers.c -o pointers.o

clean:
	@echo "Removing build"
	@rm -f pointers.o pointers
