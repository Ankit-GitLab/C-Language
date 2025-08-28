#include<stdio.h>

// Recursive function to calculate Factorial
int factorial(int n) {
    if(n == 0 || n == 1)  // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursion step
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <=n; i++) {
       printf("Factorial of %d is: %d\n", i, factorial(i));
    }
    return 0;
}
