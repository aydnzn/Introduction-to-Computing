#include <stdio.h>

/*
The program is reading a sequence of characters from the input, and it is looking for the greatest character (in terms of ASCII value) which is also an uppercase letter. It also tracks the position at which this character was found in the sequence (assuming 1-based indexing). If no uppercase letters are found, it prints "none".
*/
int main() {
    char ch, max = 'A';
    int pos = 0, count = 0;

    while ((ch = getchar()) != '\n'){
        count++;
        if('A' <= ch && ch <= 'Z' && ch > max){
            max = ch;
            pos = count;
        }
    }

    if(max == 'A'){
        printf("none");
    }
    else {
        printf("%c:%d", max, pos);
    }

    return 0;
}
