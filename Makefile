all: hello

hello: main.c
	gcc main.c -o hello

clean:
	rm -f hello 
