#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

/* 
This program fills cells in a 2D grid starting from a specified point.
 It continues to fill adjacent cells (up, down, left, and right) that have a value of 0, 
 marking them as filled with a 2. The filling continues until no more cells can be filled. 
 Finally, it prints out the filled grid. Cells with 0 are unfilled, cells with 2 are filled, 
 and cells with other values are treated as obstacles that the filling cannot pass through.
 */

// Entry point of the program
int main(void) {

    // Size of the grid
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    // Initialize the grid with the user input
    int grid[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &grid[i][j]);
        }
    }

    // Starting point for flood fill
    int startRow, startCol;
    scanf("%d %d", &startRow, &startCol);

    // Start flood fill from the starting point
    grid[startRow][startCol] = 2;

    // Continue until no more cells can be filled
    int continueFilling = 1;
    while(continueFilling == 1){
        continueFilling = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                // Check for cells to fill
                if(grid[i][j] == 2){
                    // Check north
                    if(i > 0 && grid[i - 1][j] == 0){
                        grid[i - 1][j] = 2;
                        continueFilling = 1;
                    }
                    // Check west
                    if(j > 0 && grid[i][j - 1] == 0){
                        grid[i][j - 1] = 2;
                        continueFilling = 1;
                    }
                    // Check south
                    if(i < rows - 1 && grid[i + 1][j] == 0){
                        grid[i + 1][j] = 2;
                        continueFilling = 1;
                    }
                    // Check east
                    if(j < cols - 1 && grid[i][j + 1] == 0){
                        grid[i][j + 1] = 2;
                        continueFilling = 1;
                    }
                }
            }
        }
    }

    // Print the resulting grid
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
