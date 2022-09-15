#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fiboI(int n){
    int a = 0, b = 1, c, i = 2;
    if(n == 1){
        return a;
    }else{
        if(n == 2){
            return b;
        }else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}
int fibonacciR(int f){
    if(f == 1){
        return 0;
    }else{
        if(f == 2){
            return 1;
        }else{
            return fibonacciR(f - 1) + fibonacciR(f - 2);
        }
    }
}
int main(){
    
    int n = 50;
    time_t tIni, tFim;

    tIni = time(NULL);
    printf("Fibonacci iterativo: %d\n", fiboI(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));

    tIni = time(NULL);
    printf("Fibonacci recursivo: %d\n", fibonacciR(n));
    tFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));



    return 0;
}