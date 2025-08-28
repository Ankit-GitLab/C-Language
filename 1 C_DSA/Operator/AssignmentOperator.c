#include <stdio.h>

int main() {
    // 1. BASIC ASSIGNMENT (=)
    int number;  // Variable declaration
    number = 42; // Assignment: Stores 42 in the variable 'number'
    printf("1. Basic Assignment: number = %d\n", number);

    // 2. ASSIGNMENT WITH EXPRESSIONS
    // The expression on the right (10 + 5) is evaluated first, then the result is assigned.
    int result;
    result = 10 + 5;
    printf("2. Assignment with Expression: result = %d\n", result);

    // 3. CHAINED ASSIGNMENT
    // The same value is assigned to multiple variables from right to left.
    int a, b, c;
    a = b = c = 100; // Equivalent to: c = 100; b = c; a = b;
    printf("3. Chained Assignment: a=%d, b=%d, c=%d\n", a, b, c);

    // 4. COMPOUND ASSIGNMENT OPERATORS
    // These perform an operation and an assignment in one step.
    int x = 10;
    printf("4. Compound Assignment:\n");
    printf("   Initial x = %d\n", x);

    x += 5;  // Equivalent to: x = x + 5;
    printf("   After x += 5: %d\n", x);

    x -= 3;  // Equivalent to: x = x - 3;
    printf("   After x -= 3: %d\n", x);

    x *= 2;  // Equivalent to: x = x * 2;
    printf("   After x *= 2: %d\n", x);

    x /= 4;  // Equivalent to: x = x / 4;
    printf("   After x /= 4: %d\n", x);

    x %= 3;  // Equivalent to: x = x % 3;
    printf("   After x %%= 3: %d\n\n", x); // Note: %% to print a single %

    // 5. COMMON PITFALL: Confusing = (assignment) with == (comparison)
    int age = 25;
    printf("5. Common Pitfall:\n");
    printf("   Value of age is %d\n", age);

    // This is assignment, not comparison! It assigns 30 to age and the condition is always true (non-zero).
    if (age = 30) {
        printf("   Inside 'if (age = 30)'. Now age is %d (always true)\n", age);
    }

    // This is the correct way to compare.
    if (age == 30) {
        printf("   This won't print because age is not equal to 30.\n");
    } else {
        printf("   Correct comparison: age is not 30, it is %d.\n", age);
    }

    return 0;
}