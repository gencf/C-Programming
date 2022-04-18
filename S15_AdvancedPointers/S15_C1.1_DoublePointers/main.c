#include <stdio.h>

int main(){
    int num = 123;
    int *singlePointer = NULL;
    int **doublePointer = NULL;

    singlePointer = &num;
    doublePointer = &singlePointer;

    // Value of num
    printf("Value of num: %d\n", num);
    printf("Value of num using singlePointer: %d\n", *singlePointer);
    printf("Value of num using doublePointer: %d\n\n", **doublePointer);

    // Address of num
    printf("Address of num: %p\n", &num);
    printf("Address of num using singlePointer: %p\n", singlePointer);
    printf("Address of num using doublePointer: %p\n\n", *doublePointer);

    // Value of Pointer singlePointer
    printf("Value of Pointer singlePointer using singlePointer: %p\n", singlePointer);
    printf("Value of Pointer singlePointer using doublePointer: %p\n\n", *doublePointer);

    // Address of Pointer singlePointer
    printf("Address of Pointer singlePointer using singlePointer: %p\n", &singlePointer);
    printf("Address of Pointer singlePointer using doublePointer: %p\n\n", doublePointer);

    // Value and Address of Pointer doublePointer
    printf("Value of Pointer doublePointer: %p\n", doublePointer);
    printf("Address of Pointer doublePointer: %p\n\n", &doublePointer);

    return 0;
}