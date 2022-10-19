CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ./src/main.c
LIBS = ./lib/input/input.c ./lib/linkedList/linkedList.c ./lib/stack/stack.c ./lib/queue/queue.c ./lib/parser/parser.c
OBJECTS = $(LIBS:.c=.o) $(SOURCES:.c=.o)


all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o ./build/app.out
	rm -rf ./lib/*/*.o ./src/*.o

stack: ./lib/stack/stack.c
	$(CC) $(CFLAGS) ./lib/stack/stack.c -o ./build/app.out

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o ./lib/*/*.o ./build/*.out ./src/*.o

rebuild:
	$(MAKE) clean
	$(MAKE) all 
