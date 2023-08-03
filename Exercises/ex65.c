#include <stdio.h>

/*
Implementing a breadth-first search (BFS) or flood-fill on an image. The image is represented as a 2D array where the value 0 indicates a white pixel, the value 1 indicates a black pixel, and the value 2 is used to "color" pixels. The program colors all contiguous white pixels starting from a user-defined pixel. At the end, it prints the final state of the image.
*/
#define MAX_SIZE 100

int main(void) {
    int N, M;
    int image[MAX_SIZE][MAX_SIZE];
    int start_i, start_j;

    scanf("%d%d", &N, &M);

    // Input image
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            scanf("%d", &image[i][j]);

    // Starting point for filling
    scanf("%d%d", &start_i, &start_j);

    image[start_i][start_j] = 2;

    // Perform filling
    int should_continue = 1;
    while(should_continue) {
        should_continue = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(image[i][j] == 2) {
                    if(i > 0 && image[i - 1][j] == 0) {
                        image[i - 1][j] = 2;
                        should_continue = 1;
                    }
                    if(i < N - 1 && image[i + 1][j] == 0) {
                        image[i + 1][j] = 2;
                        should_continue = 1;
                    }
                    if(j > 0 && image[i][j - 1] == 0) {
                        image[i][j - 1] = 2;
                        should_continue = 1;
                    }
                    if(j < M - 1 && image[i][j + 1] == 0) {
                        image[i][j + 1] = 2;
                        should_continue = 1;
                    }
                }
            }
        }
    }

    // Print the final image
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}
