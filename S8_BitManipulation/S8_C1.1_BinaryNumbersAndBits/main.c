#include <stdio.h>

int convertBinaryToDecimal(long long bin);

int main(){
    long long binary;
    printf("Enter a binary number:");
    scanf("%lld", &binary);
    int converted_integer = convertBinaryToDecimal(binary);
    printf("Decimal: %d\n", converted_integer);
    return 0;
}

int convertBinaryToDecimal(long long bin){
    int digit, pos_value = 1, sum = 0;
    while (bin > 0){
        digit = bin % 10;
        sum += digit * pos_value;
        bin /= 10;
        pos_value *= 2; 
    }
    return sum;
}
