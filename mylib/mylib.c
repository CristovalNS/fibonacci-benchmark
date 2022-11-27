#include <stdio.h>
#include <time.h>

// Contains the functions for iterative and recursive Fibonacci implementation

int fibonacciIterative(int N){
    int first = 0, second = 1, result, i;
    for (i = 0; i < N; i++){
        if (i <= 0){
            result = 1;
        }
        else {
        result = first + second;
        first = second;
        second = result;
        }
    } 
  return result;
}

int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    } else if (N == 1){
        return 1;
    } else {
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
