#include <stdio.h>

// Function using Call by Value
void callByValue(int x) {
    x = x + 10;  // This change won't affect the original variable
    printf("Inside callByValue, x = %d\n", x);
}

// Function using Call by Reference (using pointer)
void callByReference(int *y) {
    *y = *y + 10;  // This will change the original variable
    printf("Inside callByReference, y = %d\n", *y);
}

int main() {
    int a = 5;
    int b = 5;

    // Call by Value
    printf("Before callByValue, a = %d\n", a);
    callByValue(a);  // Passing a copy of a
    printf("After callByValue, a = %d\n\n", a);  // a remains unchanged

    // Call by Reference
    printf("Before callByReference, b = %d\n", b);
    callByReference(&b);  // Passing address of b
    printf("After callByReference, b = %d\n", b);  // b is changed

    return 0;
}
