#include<stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if(n == 0 || n == 1) return n;    // base case 1
   
        return fibonacci(n - 1) + fibonacci(n - 2); // recursion step
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
