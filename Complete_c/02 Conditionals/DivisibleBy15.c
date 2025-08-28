#include <stdio.h>
int main()
{
    int N;
    printf("To check the divisible 15 or not : ");
    scanf("%d", &N);

    if (N % 15 == 0)
    {
        printf("%d is divisible by 15", N);
    }
    else
    {
        printf("%d is not divisible 15", N);
    }
    return 0;
}