#include <stdio.h>

int calculate_gcd(int num1, int num2);

int main(){
    int num1 = 178, num2 = 89;
    printf("The GCD of %d and %d is: %d\n", num1, num2, calculate_gcd(num1, num2));
    return 0;
}

int calculate_gcd(int num1, int num2){ 
    int small_number =  num1 > num2 ? num2 : num1;
    for (int i = 2; i <= small_number; i++){
        if (num1 % i == 0 && num2 % i == 0){
            return i * calculate_gcd(num1/i, num2/i);
        }
    }

    return 1;
}
