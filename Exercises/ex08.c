#include <stdio.h>
#include <stdlib.h>

/*
This program reads an integer from the user and checks if that number is a perfect number. 
A perfect number is a positive integer that is equal to the sum of its positive 
divisors excluding the number itself. For example, 6 is a perfect number because 
its divisors are 1, 2, and 3, and their sum is also 6.
*/
int main(void) {
    // Input variable
    int inputNumber;
    
    // Sum of factors
    int sum = 0;

    // Read input number
    scanf("%d", &inputNumber);

    // Loop through numbers up to inputNumber to find its factors
    for (int i = 1; i < inputNumber; i++) {
        // If i is a factor of inputNumber, add it to sum
        if (inputNumber % i == 0) {
            sum += i;
        }
    }

    // If sum of factors is equal to the input number, it's a perfect number
    if (sum == inputNumber) {
        printf("The number is perfect!\n");
    } else {
        printf("The number is not perfect.\n");
    }

    return 0;
}
