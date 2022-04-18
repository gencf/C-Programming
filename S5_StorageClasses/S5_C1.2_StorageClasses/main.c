#include <stdio.h>

int sum_numbers(int num) {
	static int sum = 0;
	sum += num;
	return sum;
}

int main() {
	printf("%d ", sum_numbers(25));
	printf("%d ", sum_numbers(15));
	printf("%d ", sum_numbers(30));
	return 0;
}