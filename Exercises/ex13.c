#include <stdio.h>
#include <stdlib.h>

/*
This program takes an integer as input from the user and prints the digits of that number in reverse order.
*/
int main(void) {
    // Declare the variable for the input number and the digit to be printed
    int number, digit;

    // Get the input number from the user
    scanf("%d", &number);

    // Loop until there are no more digits in the number
    while(number > 0) {
        // Get the last digit of the number
        digit = number % 10;

        // Print the digit
        printf("%d", digit);

        // Remove the last digit from the number
        number = number / 10;
    }

    return 0;
}
