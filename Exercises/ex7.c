#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265 // Define PI for calculations

/*
The character is supposed to represent the type of calculation to perform (area, perimeter, or volume), 
and the floating point number represents the radius of a circle or sphere. 
If the user enters 'a', the program calculates and prints the area of a circle with the given radius. 
If the user enters 'p', the program calculates and prints the perimeter (circumference) of a circle with the given radius. 
If the user enters 'v', the program calculates and prints the volume of a sphere with the given radius. 
If the user enters any other character, the program prints 'Illegal'.
*/

int main(void) {
    char grade;      // Character indicating the type of calculation
    float radius;    // Radius of the circle or sphere

    // Read the calculation type and radius from the user
    scanf("%c%f", &grade, &radius);

    // Switch on the calculation type
    switch (grade) {
        case 'a': // Area of a circle
            printf("%f", PI * radius * radius);
            break;

        case 'p': // Perimeter (circumference) of a circle
            printf("%f", 2 * PI * radius);
            break;

        case 'v': // Volume of a sphere
            printf("%f", 4.0 / 3.0 * PI * radius * radius * radius);
            break;

        default: // Invalid calculation type
            printf("Illegal\n");
            break;
    }

    return 0;
}
