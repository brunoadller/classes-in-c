#include <stdio.h>
#include <stdlib.h>

typedef struct
{   
    int dia, mes, ano
    
}Data;

void imprimirData(Data *x){
    printf("%d/%d/%d", x->dia, x->mes, x->ano);
}

int main(){

    Data data;
    Data *p;

    p = &data;

    printf("data: %p\tp: %p \n", &data, p);

    data.dia = 29;
    data.ano = 2022;
    data.mes = 2;
        
    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
    imprimirData(p);

    return 0;
}