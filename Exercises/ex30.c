#include <stdio.h>

/*
This program reads a size n from the user, then reads n numbers into an array. It checks if the array is symmetric, which means it is the same read forwards and backwards. If the array is symmetric, it prints "symmetric". If it is not symmetric, it prints "asymmetric" and stops checking the rest of the array.
*/
int main(){
	int i;
	int size;

	scanf("%d",&size);
	int arr[size];

	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i < size / 2; i++){
		if(arr[i] != arr[size - i - 1]){
			printf("asymmetric\n");
			return 0;
		}
	}

	printf("symmetric\n");
	return 0;
}
