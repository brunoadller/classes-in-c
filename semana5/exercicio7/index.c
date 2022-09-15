#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int *vet, int tam);
void insertionSort(int *vet, int tam);
int main(){

    int *vet, i, tam = 10;
    vet = (int*)malloc(tam * sizeof(int*));
    if(vet == NULL){
        exit(1);
    }
    srand(time(NULL));
    for(i = 0; i < tam; i++){
        vet[i] = rand() % 100;
        printf(" %d ", vet[i]);
    }
    printf("\n\n");
    //insertionSort(vet, tam);
    selectionSort(vet, tam);
    free(vet);
    return 0;
}
void  insertionSort(int *vet, int tam){
    int i, j, atual, cont = 0;
    for(i = 0; i <tam; i++){
        atual = vet[i];
        for(j = i; (j > 0) && (atual < vet[j-1]); j--){
            vet[j] = vet[j - 1];
            ++cont;
        }
        vet[j] = atual;
        
    }
    printf(" %d \n\n", cont);

    for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}
void selectionSort(int *vet, int tam){
    int i, j, menor, troca, cont = 1;
    //perguntar ao professor
    for(j = 0; j < tam - 1; j++){
        menor = i;
        for(j = i + 1; j < tam; j++){
            if(vet[j] < vet[menor]){
                menor = j;
                cont++;
            }
        }
        if(i != menor){
            troca = vet[i];
            vet[i] = vet[menor];
            vet[menor] = troca;
            
           
        }
    }
    printf(" %d \n\n", cont);
     for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}