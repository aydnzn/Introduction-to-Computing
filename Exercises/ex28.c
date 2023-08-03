#include <stdio.h>

/*
This code mainly demonstrates the difference between local and global scopes in C. Inside func, i and k are local variables, so changing their values does not affect their counterparts in main. On the other hand, *j and m are pointers/references to the original variables, so changing them inside the function does change their values in the main function. Lastly, n gets the returned value from func divided by 3.
*/
int m = 40;  // declare 'm' as a global variable

float func(int i, int *j) {
	int k = 25;
	i++;
	(*j)++;
	k++;
	m++;
	printf("in func: i=%d   j=%d   k=%d   m=%d \n", i, *j, k, m);
	return k/5.0;
}

int main() {
	int i = 10, j = 20, k = 30;
	float n;

	n = func(j, &m) / 3;
	printf("in main: i=%d   j=%d   k=%d   m=%d   n=%f \n", i, j, k, m, n);
	return 0;
}
