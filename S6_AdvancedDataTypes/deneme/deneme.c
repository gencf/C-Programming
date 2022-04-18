#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void display(const int array[], int length){ // C treats array parameters as pointers. 
    for (int i = 0; i < length; i++)         // Thus int array[] is same as int *array
        printf("%d ", array[i]);
    // array[2] = 9; error: assignment of read-only location
}

void display2(const int *array, int length){
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

int main() {
    int i;
    char *ar[5]; ar[0] = "asd";
    // "asd" is a char array (char[4])"asd". Therefore, the name "asd" is a pointer which holds the address of the first element.
    // %s format string: start at the address provided and continue until encountering null terminator.
    // If you wanted to print just one character you could use the %c format string.
    printf("// %s %s %p %s %c ", ar[0], ar[1], ar[2], *ar, **ar);
    char asd[] = "asd";
    printf("%s %c\n", asd, *asd);

    int *g[7];
    int *h = NULL;
    g[0] = &i;
    // The name of an array is in fact a pointer, which points the first element of the array.
    // Hence, for all arrays, *array is same as array[0]. 
    // g is declared as an array of pointers. Thus, *g is same as g[0], which is a pointer.
    // Therefore, the name of the array g is actually a double pointer, which keeps the address of the first element
    // of the array, a pointer.  
    printf("0) %d %p %p %p %d\n", **g, *g[0], g[0], *g,  &(*g[0]));
    *(g+5) = malloc(sizeof(int) * 7);
    h = malloc(sizeof(int)); 
    if (h == NULL) 
        printf("Memory not allocated.\n");
    printf("1) %p ", h);
    *h = 7; 
    printf("%p ", h);
    printf("%d\n", *h); 

    typedef struct {
        int *c;
        float *arr[5];
    } mystruct;
    mystruct *p2;
    p2 -> c = malloc(sizeof(int));
    *(p2 -> arr) = malloc(5 * sizeof(float));

    struct a {
        int c;
        float arr[5];
    };

    struct a a1 = { 5, {1.0, 2.0, 3.7, 4.5, 5.6} };
    printf("2) %d %f", a1.c, a1.arr[4]);
    printf("%d %lu %d %d %d %d\n", a1, sizeof(a1), sizeof(a1.c), sizeof(a1.arr));

    struct a a2;
    a2.c = 553; a2.arr[1] = 8.999;
    printf("3) %d %f\n", a2.c, a2.arr[1]);

    struct a* a3[5]; printf("4) %d ", a3[0]);
    struct a a4 = {.c = 95};
    a3[0] = &a4;
    printf("%d ", a3[0]->c);
    a3[1] = malloc(sizeof(*a3[0])); a3[1]->arr[4] = 5.6; printf("%f\n", a3[1]->arr[4]);
    if (a3[1] == NULL) 
        printf("Memory not allocated.\n");

    struct a* b;
    b->c = 98; b->arr[1] = 8.9999; 
    printf("5)");
    for (i = 0; i < 5; i++) b->arr[i] = 6.89 + i;
    for (i = 0; i < 5; i++) printf("%.2f ", b->arr[i]);
    printf("%d %f %d %d\n", b-> c, b->arr[1], sizeof(b), sizeof(*b));

    float (*p)[5];
    p = &a1.arr;
    printf("6) %d %d %d %d %d\n",&a1.arr, sizeof(p), sizeof(*p), p, p+1);

    int array[4] = {1, 2, 3, 4};
    *(array + 2) = 7;
    printf("7) %p ", &array);
    printf("%p ", array + 1);
    printf("%d ", array); 
    printf("%d ", array + 1);
    printf("%u ", array);
    printf("%u ", array + 1);
    printf("%d ", array[0]);
    printf("%d ", array[2]);
    printf("%d ", *(array + 3));
    printf("%d ", sizeof(array));
    printf("%d ", sizeof(*array));
    int length = (int) sizeof(array) / sizeof(*array);
    printf("%d\n", length);

    printf("8) ");
    for (i = 0; i < 4; i++)
        printf("%d ", array[i]);

    int* ptr = calloc(4, sizeof(int));
    for (i = 0; i < 4; i++)
        ptr[i] = array[i];
    if (ptr == NULL){
        printf("NULL");
    }
    if (ptr[1] == *(array + 1)) printf("\n9) Yes ");
    *(ptr + 1) = 6;
    printf("%p ", ptr);
    printf("%p ", ptr + 1);
    printf("%d ", ptr);
    printf("%d ", ptr + 1);
    printf("%u ", ptr);
    printf("%d ", *ptr);
    printf("%d ", ptr[1]);
    printf("%d ", ptr[2]);
    printf("%d ", ptr[3]);
    printf("%d ", sizeof(ptr));
    printf("%d\n", sizeof(*ptr));
    ptr = realloc(ptr, 6 * sizeof(int));
    ptr[5] = 6; ptr[4] = 99;
    if (ptr == NULL) 
        printf("Memory not allocated.\n");

    printf("10) ");
    for (i = 0; i < 6; i++)
        printf("%d ", ptr[i]);

    printf("\n11) ");
    display(ptr, length);
    display2(ptr, length);

    printf("\n12) ");
    display(array, length);
    display2(array, length);

    return 0;
}