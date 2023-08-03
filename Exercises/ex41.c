#include <stdio.h>

// Returns the sum of two integers.
int sum(int x, int y) {
	printf("In sum(): x = %d, y = %d \n", x, y);
	return x + y;
}

// Returns the difference between the second and the first integer.
int difference(int x, int y) {
	printf("In difference(): x = %d, y = %d \n", x, y);
	return y - x;
}

// Returns the result of integer division of the first number by the second number.
int division(int x, int y) {
	printf("In division(): x = %d, y = %d \n", x, y);
	return x / y;
}

int main() {
	int a = 10, b = 20, c = 30, d = 40;
	printf("In main(): %d\n", division(sum(a,b), difference(c,d)));
	return 0;
}
