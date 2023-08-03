#include <stdio.h>

#define MAX_DIGITS 100

/*
The number is first converted from the source base to decimal, then from decimal to the target base. The results are stored in an array (convertedNum[]) and then printed in reverse order because the least significant digit is calculated first.
*/
int main(void) {
    int sourceBase, targetBase, num;
    int convertedNum[MAX_DIGITS], i = 0;

    scanf("%d %d %d", &sourceBase, &targetBase, &num);

    // Convert from source base to decimal
    int decimalNum = 0, multiplier = 1;
    while (num > 0) {
        decimalNum += (num % 10) * multiplier;
        multiplier *= sourceBase;
        num /= 10;
    }

    // Convert from decimal to target base
    while (decimalNum > 0) {
        convertedNum[i++] = decimalNum % targetBase;
        decimalNum /= targetBase;
    }

    // Print the digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", convertedNum[j]);
    }
    printf("\n");

    return 0;
}
