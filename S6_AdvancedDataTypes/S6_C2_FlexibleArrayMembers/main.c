#include <stdio.h>
#include <malloc.h>

int main() {
    int size, i;
    struct myArray {
        int length;
        int array[];
    };

    struct myArray *ptr = NULL;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    ptr = malloc(sizeof(struct myArray) + sizeof(int) * size);
    ptr -> length = size;

    for (i = 0; i < size; i++){
        printf("Enter the %d. element of the array: ", i + 1);
        scanf("%d", ptr->array + i);
    }

    printf("The elements of the array are: ", size);
    for (i = 0; i < size; i++)
        printf("%d ", ptr->array[i]);

    return 0;
}