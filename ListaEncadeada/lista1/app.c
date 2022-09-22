#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
    List *L = list_create();
    time_t ini, fim;

   
    add_last_fast(L, 10);
    print_list(L);
    add_last_fast(L, 5);
    print_list(L);
    add_last_fast(L, 4);
    print_list(L);
    add_last_fast(L, 2);
    print_list(L);
    add_last_fast(L, 7);
    print_list(L);
    list_remove(L, 10);
    print_list(L);
    return 0;
}