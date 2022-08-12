#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i,  tam, *vet;
    srand(time(NULL));

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tam);
    vet = malloc(tam * sizeof(int));
    if(vet == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }
  
    for(i = 0; i < tam; i++){
        *(vet +  i) = rand() % 100;
    }
    for(i = 0; i < tam; i++){
       printf("%d ", *(vet + i));
    }
    

    return 0;
}