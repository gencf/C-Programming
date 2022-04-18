#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX 100

char *reverseStr(char *ptr);

int main(void){

    char str[MAX];
    printf("Enter the string: ");

    scanf("%s", str);
    printf("The original string: %s\nThe reverse string: %s\n", str, reverseStr(str));

    return 0;
}

char *reverseStr(char *str){

    static int n = 0;
    static char reverse[MAX];
    int length = strlen(str);

    if (n == length)
        return reverse;

    reverse[n++] = *(str + length - 1 - n);
    reverseStr(str);

    // if (*str){
    //     reverseStr(str + 1);
    //     reverse[n++] = *str;
    // }
    
    // return reverse;
}

