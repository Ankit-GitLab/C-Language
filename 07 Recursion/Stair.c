#include <stdio.h> // Include standard input/output

// Recursive function to count the number of ways to climb stairs
int countWays(int n) {
    // Base case: If n is 0, there's 1 way (you've reached the top)
    if (n == 0) {
        return 1;
    }

    // Base case: If n becomes negative, no way to climb
    if (n < 0) {
        return 0;
    }

    // Recursive step: try climbing 1, 2, or 3 stairs
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main() {
    int stairs;

    // Ask the user for the number of stairs
    printf("Enter the number of stairs: ");
    scanf("%d", &stairs);

    // Call the recursive function and print the result
    printf("Total ways to climb %d stairs: %d\n", stairs, countWays(stairs));

    return 0; // End of program
}
