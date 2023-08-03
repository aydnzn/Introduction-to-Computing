#include <stdio.h>

#define SIZE 10
/*
This code does the following:
1. read_array reads SIZE (10 in this case) integer values from standard input into an array.
2. bubble_sort sorts the array in ascending order using the bubble sort algorithm.
3. print_array prints the sorted array.
4. swap is a helper function that swaps the values of two integer variables.
The main function coordinates these operations.
*/
void read_array(int ar[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }
}

void print_array(int ar[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%3d", ar[i]);
    }
    printf("\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int ar[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                swap(&ar[j], &ar[j + 1]);
            }
        }
    }
}

int main() {
    int ar[SIZE];
    read_array(ar, SIZE);
    bubble_sort(ar, SIZE);
    print_array(ar, SIZE);
    return 0;
}
