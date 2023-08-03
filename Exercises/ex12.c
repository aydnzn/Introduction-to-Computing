#include <stdio.h>
#include <stdlib.h>
#include <math.h> // we need this for the sqrt() function

/*
This program takes an integer number 'n' as an input from the user and checks whether this number is a prime number or not. A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
*/
int main(void) {
    int n, c = 2;

    // Ask user to input the number to check
    printf("Enter a number to check if it is prime\n");
    scanf("%d", &n);

    // Checking if the number is prime
    // We only need to check up to the square root of n
    for (c = 2 ; c <= sqrt(n); c++) {
        if (n % c == 0) {
            printf("%d is not prime.\n", n);
            return 0; // If the number is not prime, exit the program early
        }
    }

    // If no divisor is found, the number is prime
    printf("%d is prime.\n", n);

    return 0;
}
