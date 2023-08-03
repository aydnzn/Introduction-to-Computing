#include <stdio.h>
#include <stdlib.h>

/*
The character ch is read from the input, and as long as this character is not a newline (i.e., as long as the end of the line is not reached), the code checks whether it is a letter (either uppercase or lowercase). If it is, it prints that it is a letter; otherwise, it prints that it is not a letter. This is repeated for every character on the line.
*/

int main(void) {
    char ch;
    
    while(scanf("%c", &ch) != EOF && ch != '\n') {
        if(('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
            printf("%c is a letter\n", ch);
        } else {
            printf("%c is not a letter\n", ch);
        }
    }
    
    return 0;
}
