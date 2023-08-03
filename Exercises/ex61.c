#include <stdio.h>

/*
It sorts the book records based on the price using the bubble sort algorithm and then prints the sorted list.
*/
typedef struct {
    char name[4]; // to hold the null terminating character
    int pg;
    int price;
} Book;

void sort(Book arr[], int n) {
    Book temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].price > arr[j + 1].price) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    Book books[n];
    for (int i = 0; i < n; i++) {
        scanf(" %3s %d %d", books[i].name, &books[i].pg, &books[i].price);
    }

    sort(books, n);

    for (int i = 0; i < n; i++) {
        printf("%d-%s: %d pages.\n", i + 1, books[i].name, books[i].pg);
    }

    return 0;
}
