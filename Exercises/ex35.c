#include <stdio.h>

int main() {
    char stringa[50];
    int fingers = 5;

    sprintf(stringa, "Number of fingers making up a hand are %d", fingers);

    puts(stringa);

    return(0);
}
