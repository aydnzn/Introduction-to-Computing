#include <stdio.h>

/*
The original array is copied before sorting. Then the bubble_sort function correctly sorts the array. After sorting, the sorted array is compared to the original array using the is_sorted function. If they are the same (i.e., the original array was already sorted), is_sorted returns 1. Otherwise, it returns 0.
The sorted array and the result of the comparison are printed. 
*/
void read_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int is_sorted(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[size], arr_copy[size];
    
    read_array(arr, size);
    for(int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];  // Copying original array for later comparison
    }
    
    bubble_sort(arr, size);
    
    int result = is_sorted(arr, arr_copy, size);
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d", result);

    return 0;
}
