#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, array[10];

    srand(time(NULL));
    for(i = 0; i < 10; i++){
        *(array + i) = rand() % 10;
        printf("Elemento: %d - Endereco: %p\n", *(array + i), (array + i));
    }
}