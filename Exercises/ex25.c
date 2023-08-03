#include <stdio.h>

/*
This program reads an integer n from the input, and for each i in the range from 0 to n, it prints an isosceles triangle of height line. The isosceles_triangle() function reads line from the input and then prints the triangle.
*/
void isosceles_triangle() {
    int line, i, j;
    scanf("%d", &line);
    
    for (i = 1; i <= line; i++) {
        for (j = 0; j < line - i; j++)
            printf(" ");
        
        for (j = 0; j < i * 2 - 1; j++)
            printf("*");
        
        printf("\n");
    }
}

int main() {
    int i, n;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
        isosceles_triangle();

    return 0;
}
