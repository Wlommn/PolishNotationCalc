CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ./src/main.c
LIBS = ./lib/*/*.c
OBJECTS = $(LIBS:.c.o) $(SOURCES:.c.o)


all: ($)SOURCES $(LIBS)

input: ./lib/linkedList/linkedList.c
	$(CC) $(CFLAGS) ./lib/linkedList/linkedList.c -o ./build/app.out

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o 