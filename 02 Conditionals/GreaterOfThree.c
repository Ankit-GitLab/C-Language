#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter a number A : ");
    scanf("%d", &A);
    printf("Enter a number B : ");
    scanf("%d", &B);
    printf("Enter a number C : ");
    scanf("%d", &C);
    if (A > B && A > C)
    {
        printf("A is greater than b and c");
    }
    if (B > A && B > C)
    {
        printf("B is greater than a and c");
    }
    if (C > A && C > B)
    {
        printf("c is greater than a and b");
    }
    return 0;
}