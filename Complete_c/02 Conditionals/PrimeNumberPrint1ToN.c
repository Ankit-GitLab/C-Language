#include <stdio.h>

int main() {
    int n, i, j, count;

    // Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 2 to n (because 1 is not a prime number)
    for (i = 2; i <= n; i++) {
        count = 0; // Reset count for each number

        // Check how many numbers divide i
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++; // Increase count if j divides i
            }
        }

        // If i is divisible by only 2 numbers (1 and itself), it's prime
        if (count == 2) {
            printf("%d ", i); // Print the prime number
        }
    }

    return 0; // End of program
}
