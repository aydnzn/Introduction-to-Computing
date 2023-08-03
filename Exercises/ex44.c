#include <stdio.h>
#include <stdlib.h>

/*
The program reads a 10x10 grid of numbers. The program then starts at the top-left of the grid and moves right if the current number is 0 and down if the number is 1. If it can reach the bottom-right of the grid by following these rules, it prints "yes". If it cannot (because it encounters a number other than 0 or 1, or because it's asked to move right on the right edge or down on the bottom edge), it prints "no".
*/
int main(void) {
	int i, j;
	int table[10][10];
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			scanf("%d", &table[i][j]);
		}
	}

	int k = 0, l = 0;
	while(k != 9 || l != 9){
		if(table[k][l] == 0){
			if(l != 9){
				l++;
			}else{
				printf("no\n");
				return 0;
			}
		}else if(table[k][l] == 1){
			if(k != 9){
				k++;
			}else{
				printf("no\n");
				return 0;
			}
		}else{
			printf("no\n");
			return 0;
		}
	}

	printf("yes\n");

	return 0;
}
