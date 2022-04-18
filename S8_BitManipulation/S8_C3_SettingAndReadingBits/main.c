#include <stdio.h>
#include <math.h>

int main(){
    int number, number2, n, bit;

    printf("Enter any number: ");
    scanf("%d", &number);

    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &n);

    bit = (number >> n) & 0x1;    
    printf("The %d bit is set to %d\n", n, bit);

    number2 = number | (0x1 << n);
    printf("\nBit set successfully.\n");

    printf("\nNumber before setting %d bit: %d (in decimal)\n", n, number);
    printf("Number after setting %d bit: %d (in decimal)", n, number2);

    return 0;
}


