#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float potencia(int x, int n){
    if(n == 0){
        return 1;
    }else{
        return x * potencia(x, n - 1);
    }
}
int main(){
    time_t tIni, tFim;
   
    float x = 2;
    int n = 10;
    tIni = time(NULL);
    printf("%.2f ", potencia(x, n));
    tFim = time(NULL);

    printf("\n\ntempo: %f", difftime(tFim, tIni));

    return 0;
}