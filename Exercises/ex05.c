#include <stdio.h>

/*
This program reads three integers from the user and finds the median value of 
those three numbers. It first sorts the three numbers to identify the minimum 
and maximum values. Then it calculates the median by adding all three numbers 
and subtracting the sum of the minimum and maximum values from that total.
*/

int main() {
    // Initialize variables for the three input numbers and the calculated min, max, and median values
    int x, y, z, min, max, median;

    // Request the three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Identify the minimum and maximum values among the three inputs
    if (x <= y) {
        min = x;
        max = y;
        if (z < x) {
            min = z;
        } else if (z > y) {
            max = z;
        }
    } else {
        min = y;
        max = x;
        if (z > x) {
            max = z;
        } else if (z < y) {
            min = z;
        }
    }

    // Calculate the median value by subtracting the min and max from the total
    median = x + y + z - min - max;

    // Print the median value
    printf("The median value is: %d\n", median);

    return 0;
}
