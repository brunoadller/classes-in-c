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
//DESTROI A LISTA
void list_destroy(List **L_ref){
    List *L = *L_ref;
    Node *p = L->begin;
    Node *aux = NULL;

    while (p != NULL)
    {
        aux = p;
        p = p->next;
        free(aux);
    }
    free(L);
    *L_ref = NULL;
    
}
//CONTANDO ELEMENTOS DA LISTA
int length(List *L){
    Node *p = L->begin;
    int cont = 0;
    while(p != NULL){
       p =  p->next;
       cont++;
    }
    return cont;
}
//REMOVE ELEMENTO DA LISTA
void list_remove(List *L, int val){
    if(!list_is_empty(L)){
        //caso-1 o elemento está na  cabeça da lista
        if(L->begin->val == val){
            Node *pos = L->begin;
            if(L->begin == L->end){
                L->end = NULL;
            }
            L->begin = L->begin->next;
            free(pos);
        }
        //caso-2 elemento no meio da lista
        else{
            Node *ponteiro_anterior = L->begin;
            Node *ponteiro_alvo = L->begin->next;
            while(ponteiro_alvo != NULL && ponteiro_alvo->val != val){
                ponteiro_anterior = ponteiro_anterior->next;
                ponteiro_alvo = ponteiro_alvo->next;
            }
            //um nó de valor val foi encontrado
            // é apontado pelo ponteiro ponteiro_alvo
            if(ponteiro_alvo != NULL){
                ponteiro_anterior->next = ponteiro_alvo->next;

                if(ponteiro_alvo->next == NULL){
                    L->end = ponteiro_anterior;
                }
                free(ponteiro_alvo);
            }
        }
    }
}
void list_remove_fast(List *L, int val){
    if(!list_is_empty(L)){
        Node *ponteiro_anterior = NULL;
        Node *ponteiro_alvo = L->begin;
        while(ponteiro_alvo != NULL && ponteiro_alvo->val != val){
            ponteiro_anterior =ponteiro_alvo;
            ponteiro_alvo = ponteiro_alvo->next;
        }     
        if(ponteiro_alvo != NULL){
            if(L->end == ponteiro_alvo){
                L->end = ponteiro_anterior;
            }
            if(L->begin == ponteiro_alvo){
                L->begin = ponteiro_alvo->next;
            }else{
                ponteiro_anterior->next = ponteiro_alvo->next;
            }
            free(ponteiro_alvo);
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

    if(L->end == NULL){
        printf("L->end = NULL\n");
    }else{
        printf("L->end = %d\n ", L->end->val);

    }

}
bool list_is_empty(const List *L){
    return (L->begin == NULL && L->end == NULL);
}
