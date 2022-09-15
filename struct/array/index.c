#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct{
    int dia, mes, ano;
}DataNas;
typedef struct{
    DataNas datanas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/$d/%d\n", p.datanas.dia, p.datanas.mes, p.datanas.ano);
}
int main(){

}