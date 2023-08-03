#include <stdio.h>

/*
The code reads a sequence of characters from the input until it encounters a newline (\n). As it reads each character, it checks if it's a lowercase or uppercase English letter. If the character is a letter, it prints it. If the character is not a letter but the previous character was a letter, it prints a space. For all other characters, it does nothing (i.e., it effectively ignores them).
*/
int main() {  
    char currentChar, previousChar;

    // Read the first character
    scanf("%c", &currentChar);

    while(currentChar != '\n') {
        // If the character is a letter, print it
        if(('a' <= currentChar && currentChar <= 'z') || ('A' <= currentChar && currentChar <= 'Z')) {
            printf("%c", currentChar);
        }
        // If the character is not a letter but the previous one was, print a space
        else if(('a' <= previousChar && previousChar <= 'z') || ('A' <= previousChar && previousChar <= 'Z')) {
            printf(" ");
        }
        // For all other characters, do nothing

        // Keep track of the previous character and read the next one
        previousChar = currentChar;
        scanf("%c", &currentChar);
    }

    return 0;
}
