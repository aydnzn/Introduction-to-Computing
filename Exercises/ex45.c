#include <stdio.h>
#include <stdlib.h>

/*
This version of the code checks whether the entered number can be expressed as the sum of two prime numbers. For each integer from 2 to n / 2, it checks if both that integer and n minus that integer are prime. If so, it prints them out. If no such pair of primes is found, it prints a message saying that n can't be expressed as a sum of two primes.

The prime checking function is_prime is much faster, it checks divisibility up to the square root of the number, and it ignores even numbers after checking for 2.
*/
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

void sumOfPrimeNumbers(int n) {
    int found = 0;

    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    if (!found) {
        printf("%d cannot be expressed as a sum of prime numbers\n", n);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    sumOfPrimeNumbers(n);

    return 0;
}
