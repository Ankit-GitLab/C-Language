#include <stdio.h>


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("\nInside swapByValue function: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside swapByReference function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d", num1, num2);

    swapByValue(num1, num2);
    printf("\nAfter swapByValue (in main): num1 = %d, num2 = %d", num1, num2);

    swapByReference(&num1, &num2);
    printf("\nAfter swapByReference (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0; 
}