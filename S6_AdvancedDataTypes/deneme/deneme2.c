#include <stdio.h>

int main() {
	int y1 = 8, y2 = 25, y3 = 68, y4 = 897;
	int z1 = 2, z2 = 87, z3 = 654, z4 = 999;
	const int* ptr1 = &y1;
	int const* ptr2 = &y2;
	int* const ptr3 = &y3;
	const int* const ptr4 = &y4;

	// *ptr1 = 6; error: assignment of read-only location ‘*ptr1’
	ptr1 = &z1; printf("%d ", *ptr1); // *ptr1 = 875; error: assignment of read-only location ‘*ptr1’

	// *ptr2 = 85; error: assignment of read-only location ‘*ptr2’
	ptr2 = &z2; printf("%d ", *ptr2); // *ptr2 = 62; error: assignment of read-only location ‘*ptr2’

    *ptr3 = 496; printf("%d ", *ptr3);
    // ptr3 = &z3; printf("%d ", *ptr3); error: assignment of read-only variable ‘ptr3’

    // *ptr4 = 6; error: assignment of read-only location ‘*ptr4’ 
    // ptr4 = &z2; printf("%d ", *ptr2); error: assignment of read-only variable ‘ptr4’
	return 0;
}