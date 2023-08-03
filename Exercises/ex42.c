#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10

/*
The given code defines several utility functions to operate on arrays and uses them in a main function:

read_array: Reads size integers from the standard input and fills them into the array ar.
print_array: Prints size integers from the array ar to the standard output.
swap: Swaps the values of two integers.
bubble_sort: Sorts an array ar of size integers in ascending order using the bubble sort algorithm.
invert: Reverses the order of the first 10 elements in an array ar.
insertion_sort: Sorts an array ar of size integers in ascending order using the insertion sort algorithm.

The main function declares an array array of 10 integers, sorts it in ascending order using the insertion_sort function, and then prints the sorted array.
*/
void print_array(int ar[], int size)
{
	int i;
	for (i=0; i<size; i++)
		printf("%3d", ar[i]);
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void invert(int ar[], int size)
{
	int i;
	for (i = 0; i < size / 2; i++)
		swap(&ar[i], &ar[size - 1 - i]);
}

void insertion_sort(int ar[], int size)
{
	int value, i, j;
	for (i = 1; i < size; i++) 
    {
		value = ar[i];
		j = i - 1;
		while (j >= 0 && ar[j] > value)
        {
			ar[j + 1] = ar[j];
			j--;
		}
		ar[j + 1] = value;
	}
}

int main() 
{
	int array[ARRAY_SIZE] = {3, 5, 6, 7, 8, 9, 4, 2, 4, 5};
	insertion_sort(array, ARRAY_SIZE);
	print_array(array, ARRAY_SIZE);
	return 0;
}
