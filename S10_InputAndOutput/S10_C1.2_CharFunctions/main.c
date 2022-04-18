#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char *argv[]){
    char ch;  
    FILE* result = fopen("result.txt", "w");
    if (result == NULL){
        printf("Unable to open file.\n");
        exit(1);
    }
    
    if(argc == 1){
        while ((ch = getc(stdin)) != EOF) {
            if (isupper(ch))
                fputc(tolower(ch), result);
            else 
                fputc(toupper(ch), result);
        }      
    }

    else if(argc == 2){
        FILE* file = fopen(argv[1], "r");
        if (file == NULL){
            printf("Unable to open file.\n");
            exit(1);
        }
        while ((ch = getc(file)) != EOF) {
            if (isupper(ch))
                fputc(tolower(ch), result);
            else 
                fputc(toupper(ch), result);
        }
        fclose(file);
    }

    fclose(result);

    rename("result.txt", argv[1]);

    return 0;    
}