#include <stdio.h>

extern int count;

extern void display(void) {
	printf("%d ", count+1);
}