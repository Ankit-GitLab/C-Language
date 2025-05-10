#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    // Using ternary operator to find the maximum
    int max = (a > b) ? a : b;

    printf("Maximum is: %d\n", max);

    return 0;
}
