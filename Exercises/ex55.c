#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 50

struct Book {
	char name[NAME_LEN];
	int pages;
	int price;
};

void priceSort(struct Book books[], int numBooks) {
	int i, j;
	for (i = 0; i < numBooks; i++) {
		for (j = i + 1; j < numBooks; j++) {
			if (books[i].price > books[j].price) {
				struct Book temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
}

int main(void) {
	int numBooks;
	scanf("%d ", &numBooks);
	struct Book books[100];

	for (int i = 0; i < numBooks; i++) {
		scanf("%s %d %d ", books[i].name, &books[i].pages, &books[i].price);
	}

	priceSort(books, numBooks);

	for (int i = 0; i < numBooks; i++) {
		printf("%d- %s: %d pages.\n", i + 1, books[i].name, books[i].pages);
	}

	return 0;
}
