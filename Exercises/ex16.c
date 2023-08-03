#include <stdio.h>
#include <stdlib.h>

/*
This code reads in a sequence of digit characters from the input, adding each character's numerical value (obtained by subtracting '0' from the character) to evensum if its position in the sequence is even (starting from 0), or to oddsum if its position is odd. The sequence ends when the '*' character is read.

After the sequence ends, the code calculates the difference between the sum of the numbers at even positions and the sum of the numbers at odd positions, and finds the remainder when this difference is divided by 11. This remainder is then printed.

If a non-digit character other than '*' is read, the program prints "error" and returns 1 to indicate an error.
*/
int main(void) {
    int i = 0;
    char ch;
    int evensum = 0, oddsum = 0, res, rem;
    
    scanf("%c", &ch);
    
    while(ch != '*'){
        if(ch > '9' || ch < '0'){
            printf("error");
            return 1;  // return from the program because of invalid input
        }

        if(i % 2 == 0){
            evensum = evensum + ch - '0';
        }
        else if(i % 2 == 1){
            oddsum = oddsum + ch - '0';
        }
        
        i = i + 1;  // move this here
        
        scanf("%c", &ch);
    }
    
    res = evensum - oddsum;
    rem = res % 11;
    printf("%d", rem);

    return 0;
}
