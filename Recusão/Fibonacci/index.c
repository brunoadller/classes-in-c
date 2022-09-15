#include <stdio.h>
#include <stdlib.h>

int fibonacci(int f){
    if(f == 1){
        return 0;
    }else{
        if(f == 2){
            return 1;
        }else{
            return fibonacci(f - 1) + fibonacci(f - 2);
        }
    }
}

int main(){
    int f;
    printf("Escreva o numero para calcular o fatorial: ");
    scanf("%d", &f);
    printf("o termo e: %d", fibonacci(f));
  
}