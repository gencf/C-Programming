#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr){
    *ptr = malloc(sizeof(int));
}

int main(){

    int *ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 5;
    printf("Value of the integer: %d\n", *ptr);
    free(ptr);

    return 0;
}