#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

struct  simple_node{
    int val;
    struct simple_node *next;
};

struct linked_list{
    Node *begin;
    Node *end;
};
//RESPONSAVEL PELA CRIAÇÃO DOS NÓS DA LISTA
Node *node_create(int val){
    Node *node = (Node *) calloc(1, sizeof(Node));
    node->val = val;
    node->next = NULL;
}
//REMOVE ELEMENTO DA LISTA
void list_remove(List *L, int val){
    if(!list_is_empty(L)){
        //caso-1 o elemento está na  da lista
        if(L->begin->val == val){
            Node *pos = L->begin;
            L->begin = L->begin->next;
            free(pos);
        }
    }
}
//CRIA O INICIO DA LISTA
List *list_create(){
    List *L = (List *) calloc(1,sizeof(List));
    L->begin = NULL;
    return L;
}
//INSERE N INICIO DA LISTA
void add_first(List *L, int val){
    Node *p = node_create(val);
    p->next = L->begin;
    L->begin = p;
}
//NOVO TIP DE INSERÇÃO NO INICIO DA LISTA
void new_add_first(List *L, int val){
    Node *p = node_create(val);
    p->next = L->begin;
   
    if(list_is_empty(L)){
        L->end = p;
    }
     L->begin = p;
}
//INSERE NO FINAL DA LISTA
void add_last_slow(List *L, int val){
    Node *q = node_create(val);
    if(L->begin == NULL){
        L->begin = q;
    }else{
        Node *p = L->begin;
        while(p->next != NULL){
            p = p->next;
        }
        //neste momento o ponteiro p aponta para o nó vinal da lista
        p->next = q;
    }
}
//INSERE NO FINAL DA LISTA COM OTIMIZAÇÃO
void add_last_fast(List *L, int val){
    Node *q = node_create(val);
    if(L->begin == NULL){
        L->begin = q;
        L->end = q;
    }else{
        L->end->next = q;
        L->end = L->end->next;
    }
}
//IMPRIME A LISTA
void print_list(const List *L){
    Node *p = L->begin;

    printf("L -> ");
    //ENQUANTO P NÃO CHEGOU AO FIM DA LISTA
    //ENQUANTO P ESTIVER AONTANDO PARA UM NÓ DA LISTA
    while(p != NULL){
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("null\n");

}
bool list_is_empty(const List *L){
    return (L->begin == NULL && L->end == NULL);
}
