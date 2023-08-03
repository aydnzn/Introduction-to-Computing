#include <stdio.h>

// Function declarations
void insertion_sort(int ar[], int size);
int binary_search(int A[], int number, int N);

int main() {
    // Define and initialize an array
    int ar[] = {7, 3, 10, 1, 9, 2, 5};
    int size = sizeof(ar) / sizeof(ar[0]);

    // Print original array
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    // Sort the array
    insertion_sort(ar, size);

    // Print sorted array
    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    // Search for a number in the sorted array
    int number = 5; // The number to search
    int result = binary_search(ar, number, size);

    // Print the result of the search
    if(result != -1) {
        printf("Number %d found at index %d\n", number, result);
    } else {
        printf("Number %d not found in the array\n", number);
    }

    return 0;
}

// Function definitions

void insertion_sort(int ar[], int size) {
    for (int i = 1; i < size; i++) {
        int value = ar[i];
        int j = i - 1;
        
        while ((j >= 0) && (ar[j] > value)) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = value;
    }
}

int binary_search(int A[], int number, int N) {
    int low = 0, high = N - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == number) {
            return mid;
        }
        if (A[mid] < number) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
