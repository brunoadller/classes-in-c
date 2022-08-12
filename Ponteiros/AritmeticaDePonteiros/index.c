#include <stdio.h>
#include <stdlib.h>


void imprimir(int vet[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Valor: %d - Endereco: %p \n", *(vet + i), &vet + i);
    }
    printf("\n");
}
int main(){

        int vet[10] = {13, 23, 33, 44, 55, 66, 77, 88, 99, 45};

        imprimir(vet, 10);
        

    return 0;
}