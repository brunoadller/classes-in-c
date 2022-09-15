#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     int *vet, i, tam = 10;
     int v[10] = {5,7,8,1,2,3,4,10,9,6};
    srand(time(NULL));
    vet = (int*)malloc(tam * sizeof(int*));
    if(vet == NULL){
        exit(1);
    }
    for(i = 0; i < tam; i++){
        //vet[i] = v[i];
        vet[i] = rand() % 10;
        printf(" %d ", vet[i]);
    }
    printf("\n\n");
    selectionSort(vet, tam);
    free(vet);
    return 0;
}
void selectionSort(int *vet, int tam){
    int i, j, menor, troca;
    for(i = 0; i < tam - 1; i++){
        menor = i;
        for(j = i + 1; j < tam; j++){
            if(vet[j] <= vet[menor]){
                menor = j;
            }
        }
        if( i != menor){
            troca = vet[i];
            vet[i] = vet[menor];
            vet[menor] = troca;
        }
    }

    for(i = 0; i< tam; i++){
        printf(" %d ", vet[i]);
    }
}