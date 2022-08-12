#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vet, int tam, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;
    for(i = 0; i < tam; i++){
        if(*menor > *(vet + i)){
            *menor = *(vet + i);
        }
        if(*maior  < *(vet + i)){
            *maior = *(vet + i);
        }
    }
}
int main(){
    
    int menor, maior, v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Menor: %d\tMaior: %d\n", menor, maior);
    maiorMenor(v, 10, &menor, &maior);
    printf("Menor: %d\tMaior: %d\n", menor, maior);


}