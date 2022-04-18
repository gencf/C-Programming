#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int is_prime(int num);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Usage: %s {filepath}\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE* fptr = fopen(argv[1], "r");
    if (fptr == NULL){
        printf("Unable to open file: %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    puts("File opened successfully. Reading integers from file.\n");

    int n = 0;
    
    while (fscanf(fptr, "%d", &n) == 1){
        if (is_prime(n))
            printf("Prime number found: %d\n", n);
        else if (n % 2 == 0)
            printf("Even number found: %d\n", n);
        else
            printf("Odd number found: %d\n", n);
    }

    fclose(fptr);

    return 0;
}

int is_prime(int num){
    if (num < 0)
        return 0;
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}