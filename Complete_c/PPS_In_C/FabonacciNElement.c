# include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n; 

    printf("Enter how many Fibonacci numbers you want to print: ");
    scanf("%d", &n); 
    
    printf("Fibonacci Series up to %d terms:\n", n);

    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); 
    }

    printf("\n"); 
    return 0; 
}
