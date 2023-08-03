#include <stdio.h>
#include <stdlib.h>

/*The conversion formula from Fahrenheit to Celsius is (Fahrenheit - 32) * 5/9. 
The loop iterates over each temperature from the lower to the upper limit, converts 
it to Celsius, and prints the result.*/

int main() {
    // Initialization of variables
    int fahr, celsius, lower, upper, step;

    // Setting the lower and upper limits and the step size for Fahrenheit
    lower = 0;
    upper = 300;
    step = 20;

    // Starting the Fahrenheit value at the lower limit
    fahr = lower;

    // Continue the loop as long as the Fahrenheit value is less than or equal to the upper limit
    while (fahr <= upper) {
        // Convert the Fahrenheit temperature to Celsius using the formula
        celsius = 5 * (fahr-32) / 9;

        // Print the Fahrenheit and Celsius values
        printf("%d Fahrenheit is %d Celsius\n", fahr, celsius);

        // Increment the Fahrenheit value by the step size
        fahr = fahr + step;
    }

    return 0;
}
