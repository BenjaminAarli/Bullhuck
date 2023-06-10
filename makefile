output: main.c action.c
	g++ main.c action.c -o output

main.o: main.c
	g++ -c main.c

action.o: action.c action.h
	g++ -c action.c

clean: 
	rm *.o output