#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void error_recovery(){
    printf("An unexpected error detected.\n");
    longjmp(buf, 1);
}

int main(){
    while(1){
        if (setjmp(buf)){
            printf("main\n");
            break;
        }

        error_recovery();
    }

}