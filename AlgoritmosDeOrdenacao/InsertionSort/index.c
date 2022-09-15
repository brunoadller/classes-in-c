#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//odenação por seleção
void selectionSort(int *vet, int tam);
//ordenação port inserção
void insertionSort(int *vet, int tam);

int main(){
    time_t ini, fin;
    int *vet, i, tam = 20;
    srand(time(NULL));
    vet = (int*)malloc(tam * sizeof(int*));
    if(vet == NULL){
        exit(1);
    }
    for(i = 0; i < tam; i++){
        vet[i] = rand() % 20;
    }
    //selectionSort(vet, tam);
    insertionSort(vet, tam);
    
   
    return 0;
}
void selectionSort(int *vet, int tam){
    int i, j, menor, troca;
    for(i = 0; i < tam - 1; i++){
        menor = i;
        for(j = i + 1; j < tam; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = vet[i];
            vet[i] = vet[menor];
            vet[menor] = troca;
        }
        
    }
    for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}
void insertionSort(int *vet, int tam){
    int i, j, atual;
    for(i = 0; i < tam; i++){
        atual= vet[i];
        for(j = i; (j > 0) && (atual < vet[j - 1]); j--){
            vet[j] = vet[j - 1];
        }vet[j] = atual;
    }

    for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}