#include <stdio.h>
#include <math.h>

int main() {
   
    int isPrime;

    printf("Prime numbers between 1 and 100 are :\n");

    for (int i = 2; i <= 100; i++) {
        isPrime = 1; // assume number is prime

        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
