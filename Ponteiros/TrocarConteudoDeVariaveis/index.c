#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b);
int main(){
    float a, b;
    printf("Escreva um valor para a: ");scanf("%f", &a);
    printf("Escreva um valor para b: ");scanf("%f", &b);
    troca(&a, &b);
    return 0;
}
void troca(float *a, float *b){
    float troca;
    troca = *a;
    *a = *b;
    *b = troca;
    printf("Valor de a: %.2f\nValor de b: %.2f", *a, *b);

}
