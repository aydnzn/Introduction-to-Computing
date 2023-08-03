#include <stdio.h>

/*
It creates a string 'stringa' using the sprintf() function, by concatenating other string pointers (one, two, three, four, five) with a space character in between. Then it uses the puts() function to print the string to the console. This code will print "We Are Creating a String" to the console.
*/
int main() {
    char stringa[50]; 

    char *one = "We";
    char *two = "Are";
    char *three = "Creating";
    char *four = "a";
    char *five = "String";

    sprintf(stringa, "%s %s %s %s %s", one, two, three, four, five);

    puts(stringa);

    return(0);
}
