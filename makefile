CC = gcc
FLAGS = -Wall -g

all: isort txtfind

isort: mainsort.o isort.o
	$(CC) $(FLAGS) -o isort mainsort.o isort.o 

mainsort.o: mainsort.c intersort.h
	$(CC) $(FLAGS) -c mainsort.c 

isort.o: isort.c intersort.h
	$(CC) $(FLAGS) -c isort.c 



txtfind: maintxt.o txtfind.o
	$(CC) $(FLAGS) -o txtfind maintxt.o txtfind.o 

maintxt.o: txtfind.c intertxt.h
	$(CC) $(FLAGS) -c maintxt.c 

txtfind.o: txtfind.c intertxt.h
	$(CC) $(FLAGS) -c txtfind.c 



.PHONY: clean all

clean:
	rm -f *.o isort txtfind
