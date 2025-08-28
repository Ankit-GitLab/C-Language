#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 5;
    int result; // Use an int to store the result (0 for false, 1 for true)

    printf("Initial Values: a = %d, b = %d, c = %d\n\n", a, b, c);

    // 1. Logical AND (&&)
    printf("1. Logical AND (&&):\n");
    result = (a < b) && (b > c);
    printf("   (a < b) && (b > c) : %d (True)\n", result);

    result = (a > b) && (b > c);
    printf("   (a > b) && (b > c) : %d (False)\n", result);

    // 2. Logical OR (||)
    printf("\n2. Logical OR (||):\n");
    result = (a > b) || (b < c);
    printf("   (a > b) || (b < c) : %d (False)\n", result);

    result = (a == c) || (a > b);
    printf("   (a == c) || (a > b) : %d (True)\n", result);

    // 3. Logical NOT (!)
    printf("\n3. Logical NOT (!):\n");
    result = !(a == c);
    printf("   !(a == c) : %d (False)\n", result);

    result = !(a > b);
    printf("   !(a > b)  : %d (True)\n", result);

    // 4. Combining Operators in a more complex condition
    printf("\n4. Complex Condition:\n");
    result = (a >= 1) && (a <= 10) && (a != b);
    printf("   Is a between 1-10 and not equal to b? : %d (True)\n", result);

    return 0;
}