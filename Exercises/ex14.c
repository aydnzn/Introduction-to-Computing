#include <stdio.h>
#include <stdlib.h>

/*
This program reads an integer x and a character ch from standard input, formatted as "x-ch". It then prints a triangle pattern using the character ch with x number of rows.
*/
int main(void) {
    char ch;
    int x;

    scanf("%d-%c", &x, &ch); // Input in the format "number-character", e.g., "5-X"

    // Print pyramid
    for(int i = 1; i <= x; i++) {
        for(int j = 1; j <= x - i; j++) {
            printf(" "); // Print spaces
        }
        for(int k = 1; k <= 2*i - 1; k++) {
            printf("%c", ch); // Print characters
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
