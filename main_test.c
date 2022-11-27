#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int N = 38;

    // Testing function implementation
    for(int i = 1; i <= N; i++){
        if (fibonacciIterative(i) != fibonacciRecursive(i)){
            printf("[ERROR]\n");
        }
        else{
            printf("F(%d) = %d = %d\n", i, fibonacciIterative(i), fibonacciRecursive(i));
        }
    }

    return 0;
}


