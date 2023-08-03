#include <stdio.h>

/*
This code reads a number N from user input, then reads N more numbers into an array. Then, it finds the minimum and maximum numbers in the array. It subtracts the minimum number from all the numbers in the array and prints the new values.
*/
int main() {
    int N;
    scanf("%d", &N);

    int array[N]; // dynamic array size based on user input

    // Reading the numbers into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int min = array[0];
    int max = array[0];

    // Finding the minimum and maximum numbers in the array
    for (int i = 0; i < N; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Subtracting the minimum value from all the numbers and printing them
    for (int i = 0; i < N; i++) {
        array[i] -= min;
        printf("%d ", array[i]);
    }

    return 0;
}
