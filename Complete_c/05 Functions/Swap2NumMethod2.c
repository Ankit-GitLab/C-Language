#include <stdio.h>
int main()
{
    int A;
    printf("Enter a number : ");
    scanf("%d", &A);
    int B;
    printf("Enter b number : ");
    scanf("%d", &B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("The value of a is %d\n", A);
    printf("The value of b is %d\n", B);
    return 0;
}