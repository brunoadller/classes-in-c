#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vet, i, tam = 10;
    int v[10] = {5, 6, 3, 2, 1, 8, 9, 4, 10, 7};


    srand(time(NULL));
    vet = (int*)malloc(tam * sizeof(int*));
    if(vet == NULL){
        exit(1);
    }
    for(i = 0; i < tam; i++){
        vet[i] = v[i];
        printf(" %d ", vet[i]);
    }
    printf("\n\n");
    insertionSort(vet, tam);
   
    
   
    return 0;
}
void insertionSort(int *vet, int tam){
    int i, j, atual;
    for(i = 0; i < tam; i++){
        atual = vet[i];
        for(j = i; (j > 0) && (atual < vet[j - 1]); j--){
            vet[j] = vet[j - 1];
        }
        vet[j] = atual;
    }
    for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}