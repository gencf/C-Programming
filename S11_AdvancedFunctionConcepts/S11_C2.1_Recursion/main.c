#include <stdio.h>

int recursionSum(int n);

int main(void){
    printf("The sum of numbers from 1 to 5: %d\n", recursionSum(5));
    return 0;
}

int recursionSum(int n){
    if (n < 1)
        return 0;
    return n + recursionSum(n - 1);
}