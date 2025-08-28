#include <stdio.h>

int main() {
    int num1, num2, gcd, i;

    // Input two numbers from user
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d",&num2);

    // Finding the GCD using a loop
    for (i = 1; i <= num1 && i <= num2; ++i) {
        // Check if i is a divisor of both numbers
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Output the GCD
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
