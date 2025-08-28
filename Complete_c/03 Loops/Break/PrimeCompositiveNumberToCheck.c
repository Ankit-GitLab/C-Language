#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number :");
    scanf("%d", &N);
    int A = 0;
    for (int i = 2; i <= N - 1; i++)
    {
        if (N % i == 0)
        {
            A = 1;
            break;
        }
    }
    if (N <= 1)
        printf("%d is neither prime & composite", N);
    else if (A == 1)
        printf("The Number is composite number");
    else
        printf("The Number is Prime number");

    return 0;
}