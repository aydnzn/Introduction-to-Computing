#include <stdio.h>
#include <stdlib.h>

/*
The code is trying to correct the base pairs of two DNA strands to match each other according to the base-pair rule (A-T and G-C) in biology. It takes two strings as input, assumes they represent DNA strands, and modifies them to make sure that they match each other according to these rules. If the strings contain any character other than A, T, G, or C, it terminates the function and prints the position of the first invalid character.
*/
void repair(char arr1[], char arr2[], int length){
    int i, count = 0, k = -1;
    char pair;
    for(i = 0; i < length; i++){
        switch(arr1[i]){
            case 'A': pair = 'T'; break;
            case 'T': pair = 'A'; break;
            case 'G': pair = 'C'; break;
            case 'C': pair = 'G'; break;
            default: pair = '\0'; break; // for invalid character
        }

        if(pair == '\0' || pair != arr2[i]){
            if(pair == '\0'){
                k = i; 
                count = 0; 
                break; 
            }
            arr2[i] = pair; 
            count++;
        }
    }

    if(count == 0) 
        printf("%d\n", k);
    else {
        printf("%d\n", count);
        printf("%s\n", arr1);
        printf("%s\n", arr2);
    }
}

int main(void) {
    int length;
    char strain1[50];
    char strain2[50];

    scanf("%d\n", &length);
    gets(strain1);
    gets(strain2);

    repair(strain1, strain2, length);

    return EXIT_SUCCESS;
}
