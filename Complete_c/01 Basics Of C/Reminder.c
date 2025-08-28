#include <stdio.h>
int main()
{
    int A, B; // always greater than a > b
    printf("Enter Dividend : ");
    scanf("%d", &A);
    printf("Enter Divisor : ");
    scanf("%d", &B);
    int Remainder = A % B;
    printf("The Remainder When %d is divided by %d is : %d", A, B, Remainder);
    return 0;
}