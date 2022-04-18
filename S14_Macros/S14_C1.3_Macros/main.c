#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

int main(){

    int n;
    printf("Enter any number to find square and cube: ");
    scanf("%d", &n);
    printf("SQUARE(%d) = %d\n", n, SQUARE(n));
    printf("CUBE(%d) = %d\n", n, CUBE(n));

    return 0;
}