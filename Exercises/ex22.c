#include <stdio.h>

/*
The code takes three inputs: two characters and a number. It then prints a diamond-shaped pattern with the given characters. The odd numbered positions of each line in the pattern are filled with the first character and the even numbered positions are filled with the second character. The size of the diamond is determined by the input number.
*/
int main(void) {
    int i, j, num;
    char ch1, ch2;

    scanf("%c%c%d", &ch1, &ch2, &num);

    // Printing the top half of the diamond
    for (j = 0; j < num; j++) {
        for (i = 0; i < num - j - 1; i++)
            printf(" ");
        for (i = 0; i < 2 * j + 1; i++)
            printf("%c", i % 2 == 0 ? ch1 : ch2);
        for (i = 0; i < num - j - 1; i++)
            printf(" ");
        printf("\n");
    }

    // Printing the bottom half of the diamond
    for (j = 0; j < num - 1; j++) {
        for (i = 0; i < j + 1; i++)
            printf(" ");
        for (i = 0; i < 2 * (num - j - 1) - 1; i++)
            printf("%c", i % 2 == 0 ? ch1 : ch2);
        for (i = 0; i < j + 1; i++)
            printf(" ");
        printf("\n");
    }

    return 0;
}
