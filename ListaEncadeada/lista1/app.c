#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
    List *L = list_create();
   

    add_last_fast(L, 10);
    add_last_fast(L, 2);
    add_last_fast(L, 4);
    add_last_fast(L, 5);
    add_last_fast(L, 7);
    print_list(L);
    printf("Tamanho:  %d\n", length(L));
    return 0;
}