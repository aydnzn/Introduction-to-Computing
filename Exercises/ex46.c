#include <stdio.h>
#include <stdlib.h>

/*
This code performs error checking on the digit position. It calculates tens as 10 raised to the power of pos (the position of the digit to remove). The function then divides the number by tens and takes the modulus to separate the number into the part before the digit to remove (upper) and the part after (lower). The new number without the digit at position pos is then calculated as upper * tens + lower.
*/
int removeDigit(int num, int pos) {
    int tens = 1;

    for (int i = 0; i < pos; i++)
        tens *= 10;

    int lower = num % tens;
    int upper = num / (tens * 10);

    return upper * tens + lower;
}

int main(void) {
    int number, digit;
    scanf("%d %d", &number, &digit);

    if (digit < 0) {
        printf("Invalid digit position\n");
        return 1;
    }

    int res = removeDigit(number, digit);
    printf("%d\n", res);

    return 0;
}
