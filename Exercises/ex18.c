#include <stdio.h>
#include <stdlib.h>

/*
ch is initialized to 'a' - 1 (which is the ASCII value for 'a' minus 1). After reading the input integer i, if i is greater than 26, it is reduced to an equivalent value within the range 1 to 26 using the modulus operator. The new character ch1 is then calculated by adding i to ch, and printed out. This effectively prints the i-th letter of the alphabet.
*/
int main(void) {
    int i;
    char ch = 'a' - 1;
    char ch1;

    scanf("%d",&i);

    if(i > 26){
        i = i % 26;
    }
    
    ch1 = ch + i;
    printf("%c",ch1);

    return 0;
}
