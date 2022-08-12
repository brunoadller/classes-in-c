#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int A, *B, **C, ***D;

   printf("DIGITE UM VALOR: ");scanf("%d", &A);

   B = &A;
   C = &B;
   D = &C;

   printf("O DOBRO DE %d E: %d\n", A, 2 * *B);
   printf("O TRIPLO DE %d E: %d\n", A, 3 * **C);
   printf("O QUADRUPLO DE %d E: %d\n", A, 4 * ***D);


}