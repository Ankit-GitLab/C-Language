#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter a : ");
    scanf("%d", &A);
    printf("Enter b : ");
    scanf("%d", &B);
    printf("Enter c : ");
    scanf("%d", &C);
    if (A > B)
    {
        if (A > C)
            printf("%d is greater number", A);
        else // a<c
            printf("%d is greater ", C);
    }
    else
    { // b > a
        if (B > C)
            printf("%d is greater", B);
        else // c>b
            printf("%d is greater", C);
    }

    return 0;
}