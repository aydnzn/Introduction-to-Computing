#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(void) {
    int matrix[SIZE][SIZE];
    int x, y;
    
    // Read the matrix from the user
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 8){
                x = i;
                y = j;
            }
        }
    }

    int closestRow = -1, closestCol = -1;
    int minDist = SIZE*SIZE;  // max possible distance

    // Find the closest 1 in the same row
    for(int j=0; j<SIZE; j++){
        if(matrix[x][j] == 1){
            int dist = abs(y-j);
            if(dist < minDist){
                minDist = dist;
                closestRow = x;
                closestCol = j;
            }
        }
    }

    // Find the closest 1 in the same column
    for(int i=0; i<SIZE; i++){
        if(matrix[i][y] == 1){
            int dist = abs(x-i);
            if(dist < minDist){
                minDist = dist;
                closestRow = i;
                closestCol = y;
            }
        }
    }

    // Move the 8 to the closest 1
    if(closestRow != -1 && closestCol != -1){
        matrix[closestRow][closestCol] = 8;
        matrix[x][y] = 0;
    }

    // Print the updated matrix
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
