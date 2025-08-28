#include <stdio.h>
int min(int A, int B)
{
    if (A < B)
        return A;
    else
        return B;
}
int gcd(int A, int B)
{
    int HCF;
    for (int i = min(A, B); i >= 1; i--)
    {
        if (A % i == 0 && B % i == 0)
        {
            HCF = i;
            break;
        }
    }
}
int main()
{
    int A, B;
    printf("Enter 1st number : ");
    scanf("%d", &A);
    printf("Enter 2nd number : ");
    scanf("%d", &B);
    int HCF = gcd(A, B);
    printf("The HCF/GCD of %d and %d is : %d", A, B, HCF);
    return 0;
}