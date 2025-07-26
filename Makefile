main: main.c 
	clang main.c -o main 
run: main
	./main 
sure: main 
	./main

#running command