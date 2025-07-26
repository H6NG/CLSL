
main: main.c 
	clang main.c -o main
run: main
	./main 

#running command 

sure: sure.c 
	clang sure.c -o sure 
runs: main
	./sure