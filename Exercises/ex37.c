#include <stdio.h>

/*
This code takes a sequence of characters as input. It first identifies the first uppercase character in the sequence. Then, it continues scanning the rest of the input, counting the number of additional uppercase characters found and saving the last found one. If no additional uppercase characters were found after the first one, it prints the lowercase version of the first character. If additional uppercase characters were found, it prints the lowercase version of the last found uppercase character. The sequence of characters ends when '!' is entered.
*/
// Function to convert uppercase character to lowercase
int toLowercase( char ch){
    if('A' <= ch && ch <= 'Z'){
        ch = ch - 'A' + 'a';
        return ch;
    }
    else if('a' <= ch && ch <= 'z'){
        return ch;
    }
    else {
        return -1;
    }
}

int main() {
    char firstChar, tempChar, lastUppercaseChar;
    int counter = 0;
    
    // Scanning the first character from the user
    scanf("%c",&firstChar);
    
    // Find the first uppercase character in input
    while(1){
        if('A' <= firstChar && firstChar <= 'Z'){
            break;
        }
        else {
            scanf("%c",&tempChar);
            firstChar = tempChar;
        }
    }
    
    // Continue scanning the rest of the input
    while(1){
        scanf("%c",&tempChar);
        if('A' <= tempChar && tempChar <= 'Z'){
            // If uppercase character is found, update counter and save the character
            counter++;
            lastUppercaseChar = tempChar;
        }
        else if(tempChar == '!'){
            break;
        }
    }

    // If no uppercase character found after the first one, print the lowercase of the first character
    // Else print the lowercase of the last found uppercase character
    if(counter == 0){
        printf("%c", toLowercase(firstChar));
    }
    else{
        printf("%c", toLowercase(lastUppercaseChar));
    }

    return 0;
}
