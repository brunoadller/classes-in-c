#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    1. Faça um programa que gere aleatoriamente 25 valores e armazene-os em um vetor
        de 25 posições; Crie um menu com as seguintes opções:
    a. Encontra um valor. (Essa opção solicita um valor x, verifica se este valor
    está presente no vetor, e informa todas as posições onde existe o valor x no
    vetor)
    b. Calcula o produto de todos os elementos do vetor;
    c. Conta quantas vezes aparece o valor v no vetor. (Essa opção solicita ao
    usuário o valor v)
    d. Verifica se os elementos do vetor estão em ordem crescente. Se estiver ordenado, imprima uma mensagem de vetor ordenado, caso contrário, ordene.
    e. Mostre todos os números que são maiores que a média de todos os números
    informados.
    f. Imprima o vetor.
*/

void imprimirVetor(int *vet, int i);
void encontraValorNoVetor(int *vet, int i);
void produtoDosElementosDoVetor(int *vet, int i);
void contadorDoVetor(int *vet, int i);
void verificaOrdemCrescente(int *vet, int i);

int main(){
    int i, *vet, op;
    vet = malloc(25 * sizeof(int));
    if(vet == NULL){
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    srand(time(NULL));
    for(i = 0; i < 25; i++){
        *(vet + i) = rand() % 10;
    }
    printf("-----------------Menu de opcoes----------------\n\n");
    printf("Digite 1 para verificar se o valor desejado esta presente no vetor (Essa opcao solicita um valor x, verifica se este valor esta presente no vetor, e informa todas as posicoes onde existe o valor x no vetor);\n");
    printf("Digite 2 para calcular o produto de todos os elementos do vetor;\n");
    printf("Digite 3 para verificar quantas vezes o valor inserido aparece no vetor;\n");
    printf("Digite 4 para verificar se os elementos do vetor estao em ordem crescente;\n");
    printf("Digite 5 para ver todos os numeros que sao maiores que a media de todos os numeros informados;\n");
    printf("Digite 6 para imprimir o vetor.\n");
    printf("Informe a opcao escolhida: ");scanf("%d", &op);
    printf("\n\n");
    
    switch (op)
    {
        case 1:
            encontraValorNoVetor(vet, i);
            break;
        case 2:
            produtoDosElementosDoVetor(vet, i);
            break;
        case 3:
            contadorDoVetor(vet, i);
            break;
        case 4:
            verificaOrdemCrescente(vet, i);
            break;
        case 5:
            break;
        case 6:
            imprimirVetor(vet, i);
            break;
        default:
            printf("Informe um valor valido referente as opcoes do menu!");
            break;
    }
    return 0;
}
void verificaOrdemCrescente(int *vet, int i){
    int j;
    imprimirVetor(vet, i);
    for(i = 0; i < 25; i++){
        for(j = i; j < 25; j++){
            if(*(vet + i) > *(vet + j)){
                printf("Vetor nao esta em ordem crescente!\n");
                break;
            }
        }
    }
}
void contadorDoVetor(int *vet, int i){
    int v, cont = 0;
    printf("Informe um valor: ");scanf("%d", &v);
    for(i = 0; i < 25; i++){
        if(*(vet + i) == v){
           cont += 1;
        }
    }
    printf("Valor aparece %d vezes no vetor!\n", cont);
}
void produtoDosElementosDoVetor(int *vet, int i){
    int produto = 1;
    for(i = 0; i < 25; i++){
        produto = produto * *(vet + i);
    }
    printf("O produto entre todos elementos do vetor e: %d\n", produto);
}

void imprimirVetor(int *vet, int i){
    printf("| [ ");
    for(i = 0; i < 25; i++){
        printf(" %d, ", *(vet + i));
    }
    printf(" ] |\n");
}
void encontraValorNoVetor(int *vet, int i){
    int v;
    printf("Informe o valor que voce quer saber se esta no vetor: ");scanf("%d", &v);
    i = 0;
    do{
        if(*(vet + i) == v){
            printf("Valor %d na posicao %d.\n", v, i);
        }else{
            printf("Valor %d nao esta no vetor!\n", v);
            break;
        }
        i++;
    }while(i < 25);

}