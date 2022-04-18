#include <stdio.h>

int main(){
    int i, sum = 0, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    for(i = 0; i < size; i++){
        printf("Enter the %d. element: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of the elements of the array: %d", sum);
    return 0;
}