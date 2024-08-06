CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: type-casting

type-casting: type-casting.o
	@echo "Linking and producing final executable"
	@$(CC) $(CFLAGS) type-casting.o -o type-casting

type-casting.o: type-casting.c
	@echo "Compiling type-casting file"
	@$(CC) $(CFLAGS) -c type-casting.c -o type-casting.o

clean:
	@echo "Removing build"
	@rm -f type-casting.o type-casting
