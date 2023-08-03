#include <stdio.h>
#include <string.h>

/*
This program reads characters from the input until it encounters a '.' character. It creates a new string where characters are replaced based on their following digit. If a character is a lowercase or uppercase letter, it places the letter at the index indicated by the digit after it. If a digit from 0-4 follows the character, it does nothing. If the character doesn't fall into any of the prior categories, it places a space character at the index indicated by the next digit. At the end, it prints out the new string.
*/
#define MAX_SIZE 300

int main(void) {
    char str[MAX_SIZE] = {0};
    char newstr[MAX_SIZE] = {0};
    int i = 0;
    char ch;

    while ((scanf("%c", &ch), ch != '.')) {
        str[i++] = ch;
    }

    for (i = 0; i < strlen(str); i++){
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) {
            int index = str[i+1]-'0';
            newstr[index] = str[i];
        }
        else if (!(0 <= str[i]-'0' && str[i]-'0' < 5)) {
            int index = str[i+1]-'0';
            newstr[index] = ' ';
        }
    }
    printf("%s\n", newstr);
    return 0;
}
