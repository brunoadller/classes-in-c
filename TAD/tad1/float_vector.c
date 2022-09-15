#include <stdio.h>
#include "float_vector.h"
#include <stdlib.h>

struct float_vector{
    int capacity;
    int size;
    float *data;
};
FloatVector *create(int capacity){
    //aloca dinamicamente  a struct
    FloatVector *vec = (FloatVector*) calloc(1, sizeof(FloatVector));
    vec->size = 0;
    vec->capacity = capacity;
    //aloca memoria para o vetor dentro da struct
    vec->data = (float*) calloc(capacity, sizeof(float));
    return vec;
}
void destroy(FloatVector **vec_ref){
    FloatVector *vec = *vec_ref;
    free(vec->data);
    free(vec);
    *vec_ref = NULL;
}
void append(FloatVector *vec, float val){
    //coloca dentro d vetor data a partir de seu tamanho um valor
    //++ e incrementa o vetor
    if(vec->size == vec->capacity){
        printf(" ERROR in 'append'\n");
        printf("Vector is full\n");
        exit(EXIT_FAILURE);
    }
    vec->data[vec->size] = val;
    vec->size++;
}
void print(const FloatVector *vec){
    puts("------------------------------");
    printf("Size....: %d\n", vec->size);
    printf("Capacity: %d\n", vec->capacity);
    puts("-----");

    for(int i = 0; i < vec->size; i++){
        printf("[%d] = %f\n", i, vec->data[i]);
    }
}

