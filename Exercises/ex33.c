#include <stdio.h>
#include <stdlib.h>

/*
It defines four functions: mystrlen() for getting the length of the string, mystrcpy() for copying one string to another, my_strcmp() for comparing two strings, and strcatt() for concatenating two strings.
In the main() function, it uses the strcatt() function to concatenate two strings and displays the result. Then it uses the my_strcmp() function to compare two strings and displays the result.
The output of this code will show the result of concatenation and the comparison result of two strings.
*/

int mystrlen(char word[]){
    int count=0;
    while(word[count]!='\0'){
        count++;
    }
    return count;
}

void mystrcpy(char s1[],char s2[]){
    int i=0;
    while(s2[i]!='\0'){
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}

int my_strcmp(char s1[], char s2[])
{
    int i = 0;
    while ( s1[i] != '\0' )
    {
        if( s2[i] == '\0' ) {
            return 1;
        }
        else if( s1[i] < s2[i] ) {
            return -1;
        }
        else if( s1[i] > s2[i] ) {
            return 1;
        }
        i++;
    }
    return 0;
}

void strcatt(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while(s[i] != '\0') /* find the end of s */
        i++;
    while((s[i++] = t[j++]) != '\0') /*  copy t */
        ;
}

int main() {
    char s[60] = "Hello ";
    char t[100]  = "world!";
    printf("Before concatenation: %s\n", s);
    strcatt(s, t); // concatenate two strings
    printf("After concatenation: %s\n", s);
    
    char a[60] = "Hello";
    char b[60] = "world";
    int cmp_result = my_strcmp(a, b);
    printf("Comparison result: %d\n", cmp_result);

    return 0;
}
