#include <stdio.h>
#include <stdlib.h>

/*
This program calculates the average of a series of numbers provided by the user. 
The user keeps inputting numbers until they enter -1, at which point the program 
stops accepting numbers, calculates the average of the numbers entered so far, and prints it out. 
If the user enters -1 as the first number, it prints an error message saying no values were entered.
*/
int main() {
    // Initialization of variables
    float average;
    int total, count, number;
    total = 0;
    count = 0;

    // Request the first number from the user
    printf("Enter a number (-1 to end): ");
    scanf("%d", &number);

    // Loop while the user does not input -1
    while(number != -1) {
        // Add the current number to the total
        total += number;

        // Increase the count of numbers
        count++;

        // Request the next number from the user
        printf("Enter a number (-1 to end): ");
        scanf("%d", &number);
    }

    // If the user has entered at least one number (i.e., count is not zero)
    if (count != 0) {
        // Calculate the average and print it
        average = (float)total / count;
        printf("The average is: %f\n", average);
    }
    else {
        // If no numbers were entered, print an error message
        printf("No values were entered!\n");
    }

    return 0;
}
