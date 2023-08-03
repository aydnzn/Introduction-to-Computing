#include <stdio.h>
#include <stdlib.h>

/*
The program checks if the character ch is either D, E, or M in a single condition, thus reducing redundancy. If ch matches one of these characters, the program calculates the product and prints the result. If not, it prints "false entry".
*/
int main(void) {
    int i;
    float j, out;
    char ch;
    scanf("%d-%f-%c", &i, &j, &ch);
    if(ch == 'D' || ch == 'E' || ch == 'M'){
        out = (float)i * j;
        printf("%.4f-%c", out, ch);
    } else {
        printf("false entry");
    }
    return 0;
}
