#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    
    int sum = a + b;
    printf("Addition: %d + %d = %d\n", a, b, sum);
    
    
    int difference = b - a;
    printf("Subtraction: %d - %d = %d\n", b, a, difference);
    
    
    int product = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, product);
    
    
    int quotient = b / a;
    printf("Division: %d / %d = %d\n", b, a, quotient);
    
    
    int remainder = b % a;
    printf("Modulus: %d %% %d = %d\n", b, a, remainder);
    
    return 0;
}