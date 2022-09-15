#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int **matriz1, **matriz2, **matriz3, i, j;

    matriz1 = malloc(3 * sizeof(int*));
    matriz2 = malloc(3 * sizeof(int*));
    matriz3 = malloc(3 * sizeof(int*));
    if(matriz1 == NULL){
        exit(1);
    }
    for(i = 0; i < 3; i++){
        matriz1[i] = malloc(3 * sizeof(int));
        matriz2[i] = malloc(3 * sizeof(int));
        matriz3[i] = malloc(3 * sizeof(int));
    }
    printf("Preencha as matrizes entre os valores -100 e 100:\n\n"); 
    int cont = 0;
    int x = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor %d: ", cont++);
            scanf("%d", &matriz1[i][j]);
            while(matriz1[i][j] < -100 || matriz1[i][j] > 100){
                printf("\nDIGITE NOVAMENTE");
                x = 1;
                break;
            }
        }
    }
       
        
    
    
}