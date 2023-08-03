#include <stdio.h>

/*
This code first asks the user to input three integer numbers. Then, it modifies the second and third numbers by adding twice and thrice the value of the first number respectively, and then it prints out these modified values. The function modifyValues is responsible for modifying the second and third numbers, and it takes three parameters: the base value and the addresses of the second and third numbers, so it can modify their values directly.
*/

// Function that modifies the value of second and third parameters by adding twice and thrice of the first parameter respectively
void modifyValues(int base, int *num2, int *num3){
	*num2 = *num2 + 2 * base;
	*num3 = *num3 + 3 * base;
}

int main(){
	int baseValue;
	int numToModify1;
	int numToModify2;
	
    // Scan base value and two numbers to modify from the user
	scanf("%d %d %d", &baseValue, &numToModify1, &numToModify2);

	// Call modifyValues function to modify numToModify1 and numToModify2
	modifyValues(baseValue, &numToModify1, &numToModify2);
	
    // Print the modified numbers
	printf("%d %d", numToModify1, numToModify2);

	return 0;
}
