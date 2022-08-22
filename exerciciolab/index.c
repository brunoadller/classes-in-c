#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    double time_spent = 0.0;
    clock_t begin = clock();
    int **matriz1, **matriz2, **matriz3, i, j, tamLinha = 2000, tamColuna = 2000;

    matriz1 = malloc(tamLinha * sizeof(int*));
    if(matriz1 == NULL){
        exit(1);
    }
    srand(time(NULL));
    for(i = 0; i < tamLinha; i++){
        matriz1[i] = malloc(tamColuna * sizeof(int));
    }
    for(i= 0; i < tamLinha; i++){
        for(j = 0; j < tamColuna; j++){
            matriz1[i][j] = rand() % 10;    
        }   
    }

    matriz2 = malloc(tamLinha * sizeof(int*));
    if(matriz2 == NULL){
        exit(1);
    }
    for(i = 0; i < tamLinha; i++){
        matriz2[i] = malloc(tamColuna * sizeof(int));
    }
    for(i= 0; i < tamLinha; i++){
        for(j = 0; j < tamColuna; j++){
            matriz2[i][j] = rand() % 10;
        }
    }

    matriz3 = malloc(tamLinha * sizeof(int*));
    for(i = 0; i < tamLinha; i++){
        matriz3[i] = malloc(tamColuna * sizeof(int));
    }
    
    for(i = 0; i < tamLinha; i++){
        for ( j = 0; j < tamColuna; j++){
            matriz3[i][j] = (matriz1[i][j] * matriz2[i][j]);   
            printf(" %d ", matriz3[i][j]);  
        }
    
    }
    
    free(matriz1);
    free(matriz2);
    free(matriz3);
    sleep(3);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTempo:%f", time_spent);
    return 0;
}