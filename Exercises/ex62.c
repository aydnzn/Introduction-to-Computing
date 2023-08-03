#include <stdio.h>

/*
This code reads an integer 'N' and then reads 'N'x'N' integers into a 2D array. It then prints the contents of the 2D array column by column, from the bottom to the top.
*/
int main(void) {
    int N;
    
    // Read the number of rows and columns
    scanf("%d", &N);
    
    int mult[N][N];

    // Read the matrix
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &mult[i][j]);
        }
    }

    // Print the matrix column by column from bottom to top
    for(int j = 0; j < N; j++){
        for(int i = N - 1; i >= 0; i--){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
