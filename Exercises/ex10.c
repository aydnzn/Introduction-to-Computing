#include <stdio.h>
#include <stdlib.h>

/*
This code reads a sequence of numbers from the user, multiplying them together as they are input. The process stops when a number less than or equal to zero is entered, at which point the product of all entered numbers is printed to the screen. The process is set to run for a maximum of 100 iterations, but it can terminate early if a number less than or equal to zero is entered.
*/
int main(void) {
    // Initialize the product to 1
    long int product = 1;
    
    // Initialize the input variable
    int num;
    
    // Iterate up to 100 times
    for(int i = 0; i < 100; i++){
        // Get a number from the user
        scanf("%d", &num);
        
        // If the number is less than or equal to 0, stop the process
        if(num <= 0)
            break;
            
        // Multiply the product by the entered number
        product *= num;
    }
    
    // Print the product of all entered numbers
    printf("%ld", product);

    return 0;
}
