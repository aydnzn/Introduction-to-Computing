#include <stdio.h>
#include <stdlib.h>

#define TARGET 8
#define LANDMARK 1
#define SIZE 8

/*
The given code defines an absolute function and operates on an 8x8 matrix. 
The matrix is filled with input from the user. 
Then the code looks for the first occurrence of the number 8 in the matrix and notes its position. 
After that, it calculates the minimum absolute distance in the row and column of the 8 from the number 1. 
The 8 is then moved to the nearest 1 along its row or column, depending on which is closer. 
If the distances are equal, the 8 is moved along its column.
*/

int main(void) {
    int mult[SIZE][SIZE];
    int i, j, x = -1, y = -1;

    // read the matrix
    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE; j++){
            scanf("%d", &mult[i][j]);
            if(mult[i][j] == TARGET){
                x = i;
                y = j;
            }
        }
    }

    // if there's no target in the matrix, just print the matrix and return
    if(x == -1 || y == -1){
        for(i=0; i<SIZE; i++){
            for(j=0; j<SIZE; j++)
                printf("%d ", mult[i][j]);
            printf("\n");
        }
        return 0;
    }

    int minRowDistance = SIZE, minColDistance = SIZE;
    for(i=0; i<SIZE; i++){
        if(mult[x][i] == LANDMARK){
            int abs1 = abs(y - i);
            if(minRowDistance > abs1)
                minRowDistance = abs1;
        }
        if(mult[i][y] == LANDMARK){
            int abs2 = abs(x - i);
            if(minColDistance > abs2)
                minColDistance = abs2;
        }
    }

    // move the target to the nearest landmark
    mult[x][y] = 0;
    if(minRowDistance <= minColDistance)
        mult[x][y - minRowDistance] = TARGET;
    else
        mult[x - minColDistance][y] = TARGET;

    // print the final matrix
    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }

    return 0;
}
