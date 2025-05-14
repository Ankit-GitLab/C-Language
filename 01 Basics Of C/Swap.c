#include <stdio.h>  // For input and output functions

int main() {
    int a, b, temp;  // Declare variables

    // Take input from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);  // Read value of a

    printf("Enter second number (b): ");
    scanf("%d", &b);  // Read value of b

    // Show values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap logic using temp
    temp = a;  // Store value of a in temp
    a = b;     // Assign value of b to a
    b = temp;  // Assign value of temp (original a) to b

    // Show values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;  // End of program
}
