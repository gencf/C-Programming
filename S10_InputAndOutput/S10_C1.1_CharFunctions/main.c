#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int count_chars = 0;
    int count_words = 0;
    char ch;  

    if(argc == 1){
        while ((ch = getc(stdin)) != EOF) {
            if (ch == ' ' || ch == '\n'){
                count_words++;
                continue;
            }
            count_chars++;
        }      
        count_words++;
    }

    else if(argc == 2){
        FILE* file = fopen(argv[1], "r");
        if (file == NULL){
            printf("Unable to open file.\n");
            exit(1);
        }   
        while ((ch = getc(file)) != EOF) {
            if (ch == ' ' || ch == '\n'){
                count_words++;
                continue;
            }
            if (ch != '\r')
                count_chars++;
        }
        fclose(file);
    }

    printf("The number of words in the file are: %d\n", count_words);
    printf("The number of characters in the file are: %d\n", count_chars);

    return 0;
}