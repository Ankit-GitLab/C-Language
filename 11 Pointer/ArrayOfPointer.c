#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    // Array of 3 pointers to int
    int *arr[3];

    // Assign addresses of a, b, and c
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    // Accessing values using array of pointers
    for (int i = 0; i < 3; i++) {
        printf("Value at arr[%d] = %d\n", i, *arr[i]);
    }

    return 0;
}
