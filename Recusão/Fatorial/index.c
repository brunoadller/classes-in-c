#include <stdio.h>
#include <stdlib.h>

int fatorial(int fat){
    if(fat ==  0 || fat == 1){
        return 1;
    }else{
       return  fat * fatorial(fat - 1);
    }
}
int main(){
    int f;
    printf("Escreva o numero para calcular o fatorial: ");
    scanf("%d", &f);
    printf("Fatorial de %d!: %d",f, fatorial(f));
}