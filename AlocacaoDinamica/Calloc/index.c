#include <stdio.h>
#include <stdlib.h>


int main(){
    int *x;
    char *y;

    x = calloc(1, sizeof(int));
    y = calloc(1, sizeof(char));

    if(x == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }
    printf("x: %d\n", *x);
    *x = 50;
    printf("x: %d\n", *x);
    *y = 'B';
    printf("y = %c", *y);

    return 0;
}