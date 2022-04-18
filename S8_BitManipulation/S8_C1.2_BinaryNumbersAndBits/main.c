#include <stdio.h>

long long convertDecimalToBinary(int integer);

int main(){
    int integer;
    printf("Enter a decimal number:");
    scanf("%d", &integer);
    long long converted_binary = convertDecimalToBinary (integer);
    printf("Binary: %d\n", converted_binary);
    return 0;
}

long long convertDecimalToBinary(int integer){
    int digit, pos_value = 1, sum = 0;
    while (integer > 0){
        digit = integer % 2;
        sum += digit * pos_value;
        integer /= 2;
        pos_value *= 10; 
    }
    return sum;
}
