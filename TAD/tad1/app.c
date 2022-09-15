#include "float_vector.h"
#include <stdio.h>

int main() {
    FloatVector *vec = create(10);
    printf("Hello!");
    destroy(&vec);
    return 0;
}