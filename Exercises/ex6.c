#include <stdio.h>
#include <stdlib.h>

/*
This program reads characters entered by the user until it encounters a 
newline character ('\n'). For each character, it checks whether the 
character is a lowercase or uppercase letter. It keeps count of how many 
uppercase and lowercase letters it encounters. Finally, it prints out 
the counts of lowercase and uppercase letters.
*/


int main(void) {
    char ch;                  // Variable to hold each character input
    int uppercaseCount = 0;   // Counter for uppercase letters
    int lowercaseCount = 0;   // Counter for lowercase letters

    printf("Enter a string of characters: ");
    scanf("%c", &ch);         // Read the first character

    // Continue reading characters until a newline is encountered
    while(ch != '\n') {
        // If the character is a lowercase letter, increment the lowercase counter
        if('a' <= ch && ch <= 'z') {
            lowercaseCount++;
        }
        // If the character is an uppercase letter, increment the uppercase counter
        if('A' <= ch && ch <= 'Z') {
            uppercaseCount++;
        }
        // Read the next character
        scanf("%c", &ch);
    }

    // Print the counts of lowercase and uppercase letters
    printf("Lowercase count: %d, Uppercase count: %d\n", lowercaseCount, uppercaseCount);

    return 0;
}
