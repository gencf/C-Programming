#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

int main(int argc, char *argv[]){

    if (argc != 3){
        printf("Enter the command-line arguments in the following format: %s {character} {filename}\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    else {
        // char ch = argv[1][0]; 
        char ch = *argv[1];

        size_t n = 256;

        char buffer[MAX];
        char *b = buffer;
        // char *buffer;
        // buffer = (char *) malloc(sizeof(char) * n);

        FILE *filePtr = fopen(argv[2], "r");

        if (filePtr == NULL){
            printf("Unable to open file.\n");
            exit(EXIT_FAILURE);
        }

        // while (fgets(buffer, MAX, filePtr) != NULL){
        //     if (strchr(buffer, ch))
        //         puts(buffer);
        // }

        fseek(filePtr, 0, SEEK_SET);

        while (getline(&b, &n, filePtr) != -1){
            if (strchr(buffer, ch))
                fputs(buffer, stdout);
        }

        fclose(filePtr);
    }

    return 0;
}