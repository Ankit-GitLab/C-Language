#include <stdio.h>

int main()
{
    int n;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0; // Flag variable to check divisibility
    
    // Check divisibility from 2 to n-1
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0) // If n is divisible by i
        {
            a = 1; // Mark as not prime
            break; // No need to check further
        }
    }

    // Special case: numbers less than or equal to 1 are neither prime nor composite
    if (n <= 1)
        printf("%d is neither prime nor composite.\n", n);
    else if (a == 0)
        printf("%d is a prime number.\n", n); // Prime number
    else
        printf("%d is a composite number.\n", n); // Composite number

    return 0;
}
