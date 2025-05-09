#include <stdio.h>

int main() {
    // Declare and initialize an array of 5 integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Declare a pointer to an array of 5 integers
    int (*ptr)[5];

    // Point to the array
    ptr = &arr;

    // Access array elements using pointer
    for (int i = 0; i < 5; i++) {
        // *ptr is the array, (*ptr)[i] is accessing the element
        printf("Value at index %d = %d\n", i, (*ptr)[i]);
    }

    return 0;
}
