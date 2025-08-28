#include <stdio.h> // Include standard input/output library

int main() {
    int num = 10;          // Declare an integer variable and assign value 10
    int *ptr;              // Declare a pointer to an integer

    ptr = &num;            // Assign the address of variable 'num' to the pointer 'ptr'

    // Printing the value of 'num' directly
    printf("Value of num: %d\n", num);

    // Printing the address of 'num' using '&' operator
    printf("Address of num: %p\n", &num);

    // Printing the value of pointer 'ptr' (which is address of 'num')
    printf("Value of ptr (address of num): %p\n", ptr);

    // Printing the value at the address stored in pointer (dereferencing)
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0; // End of program
}
