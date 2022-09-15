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
        vet[i] = v[i];
    }
    insertionSort(v, tam);
    //bubbleSort(v, tam);
    //selectionSort(v, tam);
    free(vet);
    return 0;
}

void bubbleSort(int *v, int tam){
    int a, t, exchange, fim = tam;
    do{
        exchange = 0;
        for(a = fim- 1; a > 0; --a){
             if(v[a - 1] < v[a]){
                t = v[a - 1];
                v[a - 1] = v[a];
                v[a] = t;
                exchange = 1;

            }
        }
    }while(exchange);
    for(a = 0; a< tam; a++){
        printf(" %d ", v[a]);
    }
}
void selectionSort(int *v, int tam){
    int i, j, menor, troca;
    for(i = 0; i < tam - 1; i++){
        menor = i;
        for(j = i + 1; j < tam; j++){
            if(v[j] > v[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
    for(i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
}
void insertionSort(int *v, int tam){
    int i, j, atual;
    for(i = 0; i < tam; i++){
        atual = v[i];
        for(j = i; (j > 0) && (atual > v[j - 1]); j-- ){
            v[j] = v[j-1];

        }v[j] = atual;
    }
     for(i = 0; i< tam; i++){
        printf(" %d ", v[i]);
    }
}