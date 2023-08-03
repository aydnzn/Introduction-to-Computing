#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
This program reads a character sequence from the input until a dot is encountered. The input string is expected to be a series of characters each followed by a number (0-9), the character's position in the new string. The program then constructs a new string by placing each character at the corresponding position. 
*/
int main(void) {
    char str[300] = {0};
    char newstr[300] = {0}; // need to initialize
    int i = 0;
    
    // Read input until dot is encountered
    do {
        scanf("%c", &str[i]);
    } while(str[i++] != '.');

    for(i = 0; i < strlen(str); i++){
        // if next character is digit, place current character to its corresponding index in newstr
        if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') || (str[i]-'0' >= 0 && str[i]-'0' < 5)){
            int index = str[i+1]-'0';
            newstr[index] = str[i];
        }
    }

    printf("%s", newstr);

    return 0;
}
