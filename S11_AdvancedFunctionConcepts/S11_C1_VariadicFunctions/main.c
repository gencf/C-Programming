#include <stdio.h>
#include <stdarg.h>

int addingNumbers(int count, ...);

int main(){
    printf("10 + 20 = %d\n", addingNumbers(2, 10, 20));
    printf("10 + 20 + 30 = %d\n", addingNumbers(3, 10, 20, 30));
    printf("10 + 20 + 30 + 40 = %d\n", addingNumbers(4, 10, 20, 30, 40));

    return 0;
}

int addingNumbers(int count, ...){
    va_list args;
    va_start(args, count);

    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += va_arg(args, int); 
    }

    va_end(args);

    return sum;
}