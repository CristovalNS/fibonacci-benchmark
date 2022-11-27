#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    int N = 38;
    int c;
    int i = 0;
    clock_t t;
    t = clock();
    for (c = 0; c <= N; c++) {
        fibonacciRecursive(i);
        i++;
    }
    printf("\n");
    t = clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken for recursive approach: %f", time_taken);
    return 0;
}
