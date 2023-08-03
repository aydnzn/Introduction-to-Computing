#include <stdio.h>

/*
The code reads an integer from input and then generates a pattern using periods (".") and asterisks ("*"). The pattern is made up of three parts: an ascending line of asterisks followed by a horizontal line of asterisks, and finally a descending line of asterisks. The length of each line is equal to the number input by the user.
*/
int main() {
	int num, i, j;
	
	scanf("%d", &num);

	// Generate ascending line of asterisks
	for (i = 0; i < num - 1; i++) {
		for (j = 0; j < num - i - 1; j++) {
			printf(".");
		}
		for (j = 0; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Generate horizontal line of asterisks
	for (j = 0; j < num; j++) {
		printf("*");
	}
	printf("\n");

	// Generate descending line of asterisks
	for (i = 0; i < num - 1; i++) {
		for (j = 0; j <= i; j++) {
			printf(".");
		}
		for (j = 0; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
