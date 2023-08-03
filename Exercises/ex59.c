#include <stdio.h>
#include <stdlib.h>

/*
Simple flood fill algorithm in a 2D grid. The grid (map) is initially filled with 0's and 1's. The point at (0,0) is marked as -1. In each subsequent iteration, the program spreads this negative number to its neighboring cells in all four directions (up, down, left, right) if the neighbor cell value is 0 (meaning it's not blocked). It reduces the negative number by 1 in each step. The code stops when it reaches the point (n-1, m-1). The absolute value of the number at (n-1, m-1) minus one is the shortest distance from (0,0) to (n-1, m-1) assuming you can only move up, down, left, or right and cannot move into cells with 1 (blocked cells).
*/
#define SIZE 100

int main(void) {
    int grid[SIZE][SIZE];
    int n, m;

    // Read grid size
    scanf("%d %d", &n, &m);

    // Read grid
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &grid[i][j]);
        }
    }

    // Initialize start cell
    grid[0][0] = -1;

    // Spread the negative numbers
    while(grid[n-1][m-1] == 0){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] < 0){  // If this cell has been reached
                    // Spread to the neighboring cells if they are empty (0)
                    if(i > 0 && grid[i-1][j] == 0){
                        grid[i-1][j] = grid[i][j] - 1;
                    }
                    if(i < n-1 && grid[i+1][j] == 0){
                        grid[i+1][j] = grid[i][j] - 1;
                    }
                    if(j > 0 && grid[i][j-1] == 0){
                        grid[i][j-1] = grid[i][j] - 1;
                    }
                    if(j < m-1 && grid[i][j+1] == 0){
                        grid[i][j+1] = grid[i][j] - 1;
                    }
                }
            }
        }
    }

    // Print the shortest distance
    printf("%d\n", -grid[n-1][m-1] - 1);

    return 0;
}
