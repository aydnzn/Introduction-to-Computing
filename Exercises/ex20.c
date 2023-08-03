#include <stdio.h>

#define MAX_BINARY_DIGITS 100

/*
MAX_BINARY_DIGITS is defined to limit the maximum number of binary digits that can be stored. The input decimal number is progressively divided by 2, and the remainders, which are the binary digits, are stored in the array ikilik[]. These binary digits are then printed in reverse order since the least significant digit is calculated first in the while loop.
*/
int main(void) {
    int sayi, sayac = 0;
    int ikilik[MAX_BINARY_DIGITS];

    printf("10'luk Tabaninda Sayi Giriniz : ");
    scanf("%d", &sayi);

    while (sayi > 0) {
        ikilik[sayac++] = sayi % 2;
        sayi /= 2;
    }

    // Print the binary digits in reverse order
    for (int i = sayac - 1; i >= 0; i--) {
        printf("%d", ikilik[i]);
    }

    printf("\n");  // Print a newline for cleaner output
    return 0;
}
