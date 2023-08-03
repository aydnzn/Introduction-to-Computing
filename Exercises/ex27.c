#include <stdio.h>
#include <math.h>

/*
The roots function calculates both roots of a quadratic equation and assigns them to root1 and root2. The function sqrt from the math.h library is used to calculate the square root. The roots are only calculated if the discriminant is greater than or equal to zero, as the square root of a negative number is not a real number. The roots are then printed out in the main function.
*/
void roots(int a, int b, int c, double *root1, double *root2){
    int discriminant = b*b - 4*a*c;
    if (discriminant >= 0) {
        *root1 = (-b + sqrt(discriminant)) / (2*a);
        *root2 = (-b - sqrt(discriminant)) / (2*a);
    } else {
        printf("No real roots exist.\n");
    }
}

int main() {
    int a = 1, b = -3, c = 2;
    double root1, root2;
    
    roots(a, b, c, &root1, &root2);
    
    if(root1 != root2) {
        printf("Roots of the given equation are %.2f and %.2f\n", root1, root2);
    } else {
        printf("Root of the given equation is %.2f\n", root1);
    }

    return 0;
}
