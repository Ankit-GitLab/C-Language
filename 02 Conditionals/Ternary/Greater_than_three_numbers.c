#include <stdio.h>

int main() {
    int a = 25, b = 40, c = 30;

    // Using nested ternary operator to find the largest number
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Print the result
    printf("The largest number is: %d\n", max);

    return 0;
}
