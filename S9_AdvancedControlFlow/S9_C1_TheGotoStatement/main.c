#include <stdio.h>
#include <string.h>

#define number_of_lines 18

int main(){
    int asterisk = number_of_lines - 1;    // position of the asteriks in the line array
    int gap = 0;                           // gap between asterisks

    printNewLine: 
        if (asterisk == 0){
            char last_line[2*number_of_lines] = {[0 ... 2*number_of_lines - 2] = '*'};
            printf("%s\n", last_line);
            goto out;
        }        
        char line[2*number_of_lines] = {[0 ... 2*number_of_lines - 2] = ' '};
        line[asterisk] = '*';
        line[asterisk + gap] = '*';
        printf("%s\n", line);
        asterisk--;
        gap += 2;
        goto printNewLine;

    out:
        return 0;
    
}