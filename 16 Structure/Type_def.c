#include <stdio.h> // Including standard input-output library

int main() {
    typedef int Ankit;    // Creating an alias 'Ankit' for 'int' type
    typedef float Vedant; // Creating an alias 'Vedant' for 'float' type

    Ankit num1 = 5;       // Declaring an integer variable 'num1' and assigning 5
    Vedant num2 = 6.5;    // Declaring a float variable 'num2' and assigning 6.5

    Vedant sum = num1 + num2;  // Adding num1 and num2, result stored in 'sum' (float)

    printf("Sum is = %f\n", sum); // Printing the sum with %f format specifier for float

    return 0;  // Returning 0 to indicate successful program termination
}
