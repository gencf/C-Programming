#include <stdio.h>

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

int main(){

    int int1, int2;

    printf("Enter an integer: ");
    scanf("%d", &int1);
    printf("Enter another integer: ");
    scanf("%d", &int2);

    printf("The result of applying the ~ operator on number %d (%d) is: -%d\n", 
            int1, convertDecimalToBinary(int1), convertDecimalToBinary(-~int1));

    printf("The result of applying the ~ operator on number %d (%d) is: -%d\n", 
            int2, convertDecimalToBinary(int2), convertDecimalToBinary(-~int2));

    printf("The result of applying the & operator on number %d (%d) and number %d (%d) is: %d\n", 
            int1, convertDecimalToBinary(int1), int2, convertDecimalToBinary(int2), convertDecimalToBinary(int1 & int2));

    printf("The result of applying the | operator on number %d (%d) and number %d (%d) is: %d\n", 
            int1, convertDecimalToBinary(int1), int2, convertDecimalToBinary(int2), convertDecimalToBinary(int1 | int2));            

    printf("The result of applying the ^ operator on number %d (%d) and number %d (%d) is: %d\n", 
            int1, convertDecimalToBinary(int1), int2, convertDecimalToBinary(int2), convertDecimalToBinary(int1 ^ int2));   

    printf("The result of applying the left shift operator << on number %d (%d) by 2 places is number (%d) is: %d\n", 
            int1, convertDecimalToBinary(int1), convertDecimalToBinary(int1 << 2), int1 << 2);
    
    printf("The result of applying the right shift operator >> on number %d (%d) by 2 places is number (%d) is: %d\n", 
            int1, convertDecimalToBinary(int1), convertDecimalToBinary(int1 >> 2), int1 >> 2);
    
    return 0;
}