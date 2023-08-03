#include <stdio.h>

// Function to calculate square of a number
int square(int y) {
    return y * y;
}

int main() {
    int a;

    // Read the input
    scanf("%d", &a);

    // Print the square of the input
    printf("%d", square(a));

    return 0;
}
