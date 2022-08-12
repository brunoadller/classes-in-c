#include <stdio.h>
#include <stdlib.h>


int main(){

    int A = 100, *B, **C;

    B = &A;
    //isso dara erro pq a variavel c só 
    //pode apontar para outra variavel do tipo ponteiro
    //C = &A;

    //Assim pode pois B é um ponteiro
    C = &B;

    printf("Endereco de A: %p\t Conteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\t Conteudo de B: %d\n", &B, B);
    printf("Conteudo apontado por B: %d\n", *B);
    printf("Endereco de C: %p\t Conteudo de C: %p\n", &C, C);
    printf("Conteudo apontado por C: %d\n", **C);
    return 0;
}