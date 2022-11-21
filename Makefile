# gcc compiler
CC = gcc

# pass the flags.
CFLAGS = -Werror -Wall -Wextra -pedantic -std=gnu89

all:
	$(CC) $(CFLAGS) *.c -lSDL2 -g -o maze.exe
