CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ./src/main.c
LIBS = ./lib/input/input.c ./lib/linkedList/linkedList.c ./lib/stack/stack.c
OBJECTS = $(LIBS:.c=.o) $(SOURCES:.c=.o)


all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o ./build/app.out

stack: ./lib/stack/stack.c
	$(CC) $(CFLAGS) ./lib/stack/stack.c -o ./build/app.out

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o ./lib/*/*.o ./build/*.out ./src/*.o

rebuild:
	$(MAKE) clean
	$(MAKE) all 
