#include <stdio.h>
#include <ctype.h>

#define IS_UPPER(c) ((isupper(c) && isalpha(c)) ? 1 : 0)
#define IS_LOWER(c) ((islower(c) && isalpha(c)) ? 1 : 0)

int main(){

    char c;
    printf("Enter any character: ");
    c = getchar();

    if (IS_UPPER(c))
        printf("'%c' is uppercase\n", c);

    else if (IS_LOWER(c))
        printf("'%c' is lowercase\n", c);

    else
        printf("'%c' is not in the alphabet\n", c);

    return 0;;
}
