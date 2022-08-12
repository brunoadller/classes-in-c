#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int **matriz, i, j;
    int *vetor1, *vetor2;

    //aloca as linhas da matriz para abrigar ponteiros inteiros em cada linha
    matriz = malloc(5 * sizeof(int*));
    if(matriz == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }
    //cria a coluna em cada linha alocando 10 inteiros em cada linha
    for(i = 0; i < 5; i++){
        matriz[i] = malloc(10 * sizeof(int));
    }
    //contralo os vaores da hora do computador
    srand(time(NULL));
    //sorteia valores e coloca na matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] = rand() % 100;
        }
    }
    int soma;
    //aloca espaço para as somas
    vetor1 = malloc(5 * sizeof(int));

    //soma as linhas e coloca no vetor
    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 10; j++){
            soma += matriz[i][j];
        }
        *(vetor1 + i) = soma;
    }
    //soma as colunas
     vetor2 = malloc(10 * sizeof(int));

     for(j = 0; j < 10; j++){
        soma = 0;
        for(i = 0; i < 5; i++){
            soma += matriz[i][j];
        }
        *(vetor2 + j) = soma;
    }
    //mostra a matriz
    for(i = 0; i < 5; i++){
        printf("| [ ");
        for(j = 0; j < 10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf(" ] |\n");
    }
    //mostra a soma das linhas
    printf("\n");
    printf("Soma de cada linha da matriz: \n");
    for(i = 0; i < 5; i++){
        printf("linha %d: soma = %d \n",i + 1, *(vetor1 + i));
    }
    //mostra a soma das colunas
    printf("\n");
    printf("Soma de cada coluna da matriz: \n");
    for(j = 0; j < 10; j++){
        printf("Coluna %d: soma = %d \n",j + 1, *(vetor2 + j));
    }
    free(matriz);
    return 0;
}