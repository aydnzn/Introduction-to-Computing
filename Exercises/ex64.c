#include <stdio.h>

/*
This code takes an input of a 2D grid (of user-defined dimensions), and from there, it runs a flood-fill-like algorithm to replace zeros in the grid with negative numbers. It starts from the top-left cell and spreads towards the right and bottom, replacing zeros with a number which is one less than the current cell's value. The loop continues until the bottom-right cell of the grid is not zero. It then prints the absolute value of the bottom-right cell incremented by one.
*/
int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int grid[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    grid[0][0] = -1;

    // Loop while bottom-right cell is 0
    while(grid[x - 1][y - 1] == 0) {
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                if(grid[i][j] != 1 && grid[i][j] != 0) {
                    if(i > 0 && grid[i - 1][j] == 0) grid[i - 1][j] = grid[i][j] - 1;
                    if(i < x - 1 && grid[i + 1][j] == 0) grid[i + 1][j] = grid[i][j] - 1;
                    if(j > 0 && grid[i][j - 1] == 0) grid[i][j - 1] = grid[i][j] - 1;
                    if(j < y - 1 && grid[i][j + 1] == 0) grid[i][j + 1] = grid[i][j] - 1;
                }
            }
        }
    }

    // Calculate and print result
    int result = -grid[x - 1][y - 1] + 1;
    printf("%d", result);

    return 0;
}
