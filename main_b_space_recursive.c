#include <stdio.h>
#include <sys/resource.h>
#include "mylib/mylib.h"

int main(){
    
    int memory;

    while(1){
        memory = fibonacciRecursive(1000);
    }

    return 0;
}
