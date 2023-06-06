SOURCES = lib.c 

main: $(SOURCES)
	gcc $(SOURCES) -o main

run: main
	./main
