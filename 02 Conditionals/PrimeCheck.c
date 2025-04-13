#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    int isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for (num = 2; num <= 100; num++) {
        isPrime = 1; // assume number is prime

        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}
