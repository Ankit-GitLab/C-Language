#include <stdio.h>
int add(int A, int B)
{
    return A + B;
}

int main()
{
    int A;
    printf("Enter 1st number : ");
    scanf("%d", &A);
    int B;
    printf("Enter 2nd number : ");
    scanf("%d", &B);
    int Sum = add(A, B);
    printf("%d", Sum);
    return 0;
}