#include <stdio.h> 

int factorial(int n) {
    int fact = 1; 
    for (int i = 1; i <= n; i++) {
        fact = fact * i; 
    }
    return fact; 
}

int main() {
    int rows = 5; 

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            int value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", value); // Print the value
        }
        printf("\n"); 
    }

    return 0; 
}
