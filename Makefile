
all : mylib.o
	gcc -o main.out main_test.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time: mylib.o
	gcc -o main_b_time_iterative.out main_b_time_iterative.c mylib.o
	gcc -o main_b_time_recursive.out main_b_time_recursive.c mylib.o
	
space: mylib.o
	gcc -o main_b_space_iterative.out main_b_space_iterative.c mylib.o
	gcc -o main_b_space_recursive.out main_b_space_recursive.c mylib.o
	
clear:
	rm -rf *.out
	rm -rf *.o
