#include <stdio.h>

int main() {
    int A, B, C;

    // Taking input from user
    printf("Enter A number : ");
    scanf("%d", &A);

    printf("Enter B number : ");
    scanf("%d", &B);

    printf("Enter C number : ");
    scanf("%d", &C);

    // Finding and displaying the largest number
    if (A >= B && A >= C) {
        printf("A is greater than b and c");
    } else if (B >= A && B >= C) {
        printf("B is greater than a and c");
    } else {
        printf("C is greater than a and b");    }

    return 0;
}
