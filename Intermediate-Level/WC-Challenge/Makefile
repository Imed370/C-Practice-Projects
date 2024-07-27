# Define the compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: ccwc

ccwc: ccwc.o
	@echo "Linking and producing final executable"
	$(CC) $(CFLAGS) ccwc.o -o ccwc

ccwc.o: ccwc.c
	@echo "Compiling main file"
	$(CC) $(CFLAGS) -c ccwc.c -o ccwc.o

test:
	@echo "Starting Test Script"
	./test.sh

clean:
	@echo "Removing build"
	@rm -f ccwc.o ccwc
