#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSortShaker(int vet[10], int tam);

int main(){
    int i, tam = 10;
    //------------- 0  1   2   3   4   5   6   7   8   9
    int vet[10] = {20, 11, 16, 9, 12, 14, 17, 19, 13, 15};
   
   
    bubbleSortShaker(vet, tam);
    
   
    return 0;
}
void bubbleSortShaker(int vet[10], int tam){
    int i,j, troca, exchange, cont = 1, conteudo[10];
    do{
        exchange = 0;
        for( i = 1; i < tam; i++){
          if(vet[i - 1] > vet[i]){
                troca = vet[i - 1];
                vet[i - 1] = vet[i];
                vet[i] = troca;
                exchange = 1;
                if(cont == 2){
                    for(j = 0; j < tam; j++){
                        conteudo[j] = vet[j];
                    }
                }
                cont++;
           }
        }

    }while(exchange);
   
    printf("\n\n");
    for(i = 0; i < tam; i++){
        printf(" %d ", conteudo[i]);
    }
    printf("\n\n");
     for(i = 0; i < tam; i++){
        printf(" %d ", vet[i]);
    }
}