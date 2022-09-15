#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int verificaOrdem(int *vet, int tam);

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
        printf(" %d ", vet[i]);
    }
    if(verificaOrdem(vet, tam) == 1){
        printf("O vetor nao esta em ordem crescente ");
    }else{
        printf("O vetor esta em ordem crescente");
    }
    
   
    return 0;
}
int verificaOrdem(int *vet, int tam){
    int i, j, menor;
    for(i = 0; i < tam - 1; i++){
        menor = i;
        for(j = i + 1; j < tam; j++){
            if(vet[j] < vet[menor]){
                return 1;
                break;
            }else{
                return 0;
                break;
            }
        }
    }
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
