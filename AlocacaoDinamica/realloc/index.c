 #include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i,  tam, *vet;
    srand(time(NULL));

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tam);
    vet = malloc(tam * sizeof(int));
    if(vet){
        printf("Memoria alocada com suvcesso\n");
        
        for(i = 0; i < tam; i++){
            *(vet +  i) = rand() % 100;
        }
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");
        printf("\ndigite o novo tamanho do vetor:\n");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        printf("Vetor realocado.\n");
    
        for(i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");
        
    }else{
        printf("ERRO AO ALOCAR MEMORIA!\n");
    }
  
    return 0;
}