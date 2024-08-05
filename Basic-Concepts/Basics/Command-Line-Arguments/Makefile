CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: command-line-arguments

command-line-arguments: command-line-arguments.o
	@echo "Linking and producing final executable"
	@$(CC) $(CFLAGS) command-line-arguments.o -o command-line-arguments

command-line-arguments.o: command-line-arguments.c
	@echo "Compiling and assembling source files"
	@$(CC) $(CFLAGS) -c command-line-arguments.c -o command-line-arguments.o

clean: 
	@echo "Removing build"
	@rm -f command-line-arguments.o command-line-arguments
