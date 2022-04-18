#include <stdio.h>

struct onscreen_box{
    unsigned int :4;
    unsigned int is_opaque:1;
    unsigned int fill_color:3;
    unsigned int :2;
    unsigned int show_border:1;
    unsigned int border_color:3;
    unsigned int border_style:2;
};

int main(){

    char *is_opaque[] = {"transparent", "opaque"};
    char *color[] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};
    char *show_border[] = {"not shown", "shown"};
    char *border_style[] = {"solid", "dotted", "dashed"};

    struct onscreen_box box = {1, 4, 0, 3, 1};

    printf("Original box settings:\nBox is %s.\nThe fill color is %s.\nBorder %s.\nThe border color is %s.\nThe border style is %s.\n\n",
            is_opaque[box.is_opaque], color[box.fill_color], show_border[box.show_border], color[box.border_color], border_style[box.border_style]);    
    
    box.is_opaque = 0; box.fill_color = 6; box.show_border = 1; box.border_color = 2; box.border_style = 0;
    
    printf("Modified box settings:\nBox is %s.\nThe fill color is %s.\nBorder %s.\nThe border color is %s.\nThe border style is %s.\n\n",
        is_opaque[box.is_opaque], color[box.fill_color], show_border[box.show_border], color[box.border_color], border_style[box.border_style]);
    
    return 0;
}