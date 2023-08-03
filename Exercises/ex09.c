#include <stdio.h>
#include <stdlib.h>

/*
This program reads characters from the input and expects a binary sequence 
(a sequence of '0's and '1's). As it reads each character, it inverts the binary digit 
(i.e., '0' becomes '1' and '1' becomes '0') and then prints the inverted binary digit. 
The program continues to do this as long as the entered character is either '0' or '1'. 
If any other character is entered, the program exits.
*/

int main(void) {
    // Input character
    char ch;

    // Read the first character
    scanf("%c", &ch);

    // While the character is either '0' or '1'
    while(ch == '0' || ch == '1') {

        // If the character is '0', convert it to '1' and print
        if(ch == '0') {
            ch = '1';
            printf("%c", ch);
        }

        // If the character is '1', convert it to '0' and print
        else if(ch == '1') {
            ch = '0';
            printf("%c", ch);
        }

        // Read the next character
        scanf("%c", &ch);
    }

    return 0;
}
