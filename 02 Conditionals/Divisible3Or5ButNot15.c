#include <stdio.h>
int main()
{
    int N;
    printf("To check the divisible by 3 or 5  :");
    scanf("%d", &N);
    if ((N % 5 == 0 || N % 3 == 0) && N % 15 != 0)
    {

        printf("divisible by 3 or 15 but not 15");
    }

    else if (N % 15 == 0)
    {
        printf(" divisible by 15 ");
    }
    else
    {
        printf("not divisible by 15 ");
    }

    return 0;
}