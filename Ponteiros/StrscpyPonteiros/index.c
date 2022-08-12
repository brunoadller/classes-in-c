#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void strcopy(char *destino, char *origem){
    int i = 0;
    printf("Variavel destino: ");
    while(*(origem + i) != '\0'){
       *(destino + i) = *(origem + i);
       printf("%c", *(destino + i));
        i++;
    }
}
int main(){
   char origem[50], destino[50];
   int i;
    printf("Escreva seu nome para variavel de origem: ");
    fgets(origem, 50, stdin);
    strcopy(destino, origem);

   return 0;

}

