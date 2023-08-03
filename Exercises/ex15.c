#include <stdio.h>
#include <stdlib.h>

int main() {
    char cur, prev = 0;
    int p = 0;

    while(scanf("%c", &cur) != EOF) {  // read until end of file or input stream
        if(cur >= '1' && cur <= '9') {  // if current char is a digit
            p = cur - '0';  // convert char to int
        }
        else {
            if(prev >= '1' && prev <= '9') {  // if previous char was a digit
                for(int i = 0; i < p; i++) {
                    switch(cur) {
                        case 'b':
                            printf("-");
                            break;
                        case 's':
                            printf("*");
                            break;
                        case 'n':
                            printf("\n");
                            break;
                        default:
                            printf("Error: Unknown character '%c'\n", cur);
                            break;
                    }
                }
            } 
            else {
                switch(cur) {
                    case 'b':
                        printf("-");
                        break;
                    case 's':
                        printf("*");
                        break;
                    case 'n':
                        printf("\n");
                        break;
                    default:
                        printf("Error: Unknown character '%c'\n", cur);
                        break;
                }
            }
            p = 0;  // reset repeat count
        }
        prev = cur;  // update previous char
    }
    return 0;
}
