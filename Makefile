CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ./src/main.c
LIBS = ./lib/*/*.c
OBJECTS = $(LIBS:.c.o) $(SOURCES:.c.o)


all: ($)SOURCES $(LIBS)

stack: ./lib/stack/stack.c
	$(CC) $(CFLAGS) ./lib/stack/stack.c -o ./build/app.out

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o 