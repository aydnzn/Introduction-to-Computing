#include <stdio.h>
#include <stdlib.h>

/*

This code generates a kind of "pyramid" structure with three types of characters read from the input, up to a maximum width determined by the integer gir. In other words, it draws a triangle, where the height of the triangle is determined by the number gir.

The triangle consists of three types of characters: ch1, ch2, and ch3. It starts and ends with ch1, the middle portion consists of ch2, and between ch1 and ch2 there's a portion filled with ch3.

The final line of output after the loop is a string of ch2 repeated for a total of 4 * gir - 3 times. This acts as the base of the pyramid.
*/

void print_char_multiple_times(char ch, int times) {
    for(int i = 0; i < times; i++) {
        printf("%c", ch);
    }
}

int main(void) {
    char ch1, ch2, ch3;
    int gir;
    scanf("%c%c%c%d", &ch1, &ch2, &ch3, &gir);
    
    for(int i = 0; i < gir - 1; i++) {
        print_char_multiple_times(ch1, gir - 1 - i);
        print_char_multiple_times(ch2, 2 * i + 1);
        print_char_multiple_times(ch3, 2 * (gir - i - 1) - 1);
        print_char_multiple_times(ch2, 2 * i + 1);
        print_char_multiple_times(ch1, gir - 1 - i);
        printf("\n");
    }

    print_char_multiple_times(ch2, 4 * gir - 3);

    return 0;
}
