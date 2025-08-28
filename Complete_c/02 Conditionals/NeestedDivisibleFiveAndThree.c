#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    if (N % 15 == 0)
    {
        printf("divisible by %d", N);
    }
    else if (N % 3 == 0)
    {
        printf("it is divisible three");
    }
    else if (N % 5 == 0)
    {
        printf("it is divisible by five ");
    }
    else
    {
        printf("it is not divisible by five and three ");
    }

    return 0;
}