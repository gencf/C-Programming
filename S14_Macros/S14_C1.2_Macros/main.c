#include <stdio.h>

#define SUM(a, b) ((a) + (b))

int main(){

    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, SUM(num1, num2));

    return 0;
}