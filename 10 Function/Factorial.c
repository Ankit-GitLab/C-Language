#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;           // Initialize result
    for(int i = 1; i <= n; i++) {
        fact = fact * i;    // Multiply fact by i in each iteration
    }
    return fact;            // Return the final result
}

int main() {
    int number;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and display the result
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }

    return 0;
}
