
main: main.c 
	clang main.c -o main
run: main
	./main 

#running command 

sure: sure.c 
	clang sure.c -o sure 
runs: main
	./sure


c: a.c 
	clang a.c -o c 
runss: main 
	./a

k: string.c 
	clang string.c -o string
walk: main 
	./string
