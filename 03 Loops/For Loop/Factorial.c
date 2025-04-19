#include<stdio.h>  // Include standard input-output header

int main() {  // Start of the main function
    int n;  // Declare an integer variable to store the user input

    // Prompt the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &n);  // Read the input number and store it in variable 'n'

    int product = 1;  // Initialize product to 1 (used for factorial calculation)

    // Loop from 1 to n to calculate factorial
    for(int i = 1; i <= n; i++) {
        product = product * i;  // Multiply product by current value of i

        // Print the intermediate factorial at each step
        printf("The Factorial %d is : %d\n", i, product);  
    }

    return 0;  // Return 0 to indicate successful execution
}
