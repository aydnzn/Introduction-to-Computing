#include <stdio.h>

/*
This program is taking 5 numbers as input, calculating the average of these numbers, and then calculating the variance.
*/
int main(){
	int i;
	int sum = 0;
	int num[5];

	for(i = 0; i < 5; i++){
		scanf("%d", &num[i]);
		sum += num[i];
	}

	float avg = (float)sum / 5;
	int sum_squared_diffs = 0;

	for(i = 0; i < 5; i++){
		int diff = num[i] - avg;
		sum_squared_diffs += diff * diff;
	}

	float variance = (float)sum_squared_diffs / 5;
	printf("Average: %f Variance: %f", avg, variance);

	return 0;
}
