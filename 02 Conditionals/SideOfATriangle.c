#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter 1 side :");
    scanf("%d", &A);
    printf("Enter 2nd side :");
    scanf("%d", &B);
    printf("Enter 3rd side :");
    scanf("%d", &C);
    if ((A + B) > C && (B + C) > A && (C + A) > B)
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }

    return 0;
}