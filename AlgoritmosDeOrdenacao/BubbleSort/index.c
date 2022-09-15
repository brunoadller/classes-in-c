#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *vet, int tam);
void shaker(int *vet, int tam);

int main(){
     time_t ini, fin;
    int *vet, i, tam = 20000;
    srand(time(NULL));
    vet = (int*)malloc(tam * sizeof(int*));
    if(vet == NULL){
        exit(1);
    }
    for(i = 0; i < tam; i++){
        vet[i] = rand() % 20;
    }
    ini = time(NULL);
    shaker(vet, tam);
    fin = time(NULL);
    printf("tempo:  %f",difftime(fin, ini));
   

    
   
    return 0;
}
//BUBBLE SORT COMUM NO ENTANTO LENTO PARA VALORES GRANDES
void bubbleSort(int *vet, int tam){
   
    int a, b, c;
    for(a = 1; a < tam; ++a){
        for(b = tam - 1; b >= a; --b){
            if(vet[b - 1] > vet[b]){
                c = vet[b - 1];
                vet[b - 1] = vet[b];
                vet[b] = c;
            }
        }
    }
    for(a = 0; a < tam; a++){
        printf(" %d ", vet[a]);
    }

}
//BUBBLE SORT MAIS EFICIENTE PARA VALORES GRANDES
//ordenação oscilante
void shaker(int *vet, int tam){
    int a, t, exchange;
    do{
        exchange = 0;
        for(a = tam - 1; a > 0; --a){
            if(vet[a - 1] > vet[a]){
                t = vet[a - 1];
                vet[a - 1] = vet[a];
                vet[a] = t;
                exchange = 1;
            }
        }
        
    }while(exchange);
    for(a = 0; a < tam; a++){
        printf(" %d ", vet[a]);
    }
}