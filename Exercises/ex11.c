#include <stdio.h>
#include <stdlib.h>

/*
This program reads an integer from the user to determine the height of a triangle, and then prints a triangle of asterisks(*) of that height to the console. The triangle is centered and has a number of asterisks per line that is based on the current line number (i.e., 1 on the first line, 3 on the second line, 5 on the third line, etc).
*/

int main(void) {
    // Initialize the line, i, and j variables
    int line, i, j;

    // Prompt the user for the height of the triangle
    printf("Enter the height :");
    scanf("%d", &line);
    
    // Iterate for each line of the triangle
    for (i = 1; i <= line; i++)
    {
        // Print leading spaces
        for (j = 0; j < line - i; j++)
            printf(" ");
            
        // Print the asterisks
        for (j = 0; j < i * 2 - 1; j++)
            printf("*");
            
        // Print a newline character to move to the next line
        printf("\n");
    }
    
    return 0;
}
