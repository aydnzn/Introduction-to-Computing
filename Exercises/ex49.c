#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 It checks if the difference between the current and previous elements is 1 and if so, increments count. If the difference is not 1, it resets count to 1. It updates max_sequence (the longest sequence of consecutive integers) whenever a longer sequence is found.
*/
int main(void) {
    int size;
    int arr[100];
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    int count = 1, max_sequence = 1;
    for (int i = 1; i < size; i++){
        if (abs(arr[i] - arr[i - 1]) == 1){
            count++;
            if(count > max_sequence){
                max_sequence = count;
            }
        }
        else{
            count = 1;
        }
    }
    printf("%d", max_sequence);

    return 0;
}
