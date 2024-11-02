#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number :");
    scanf("%d", &N);
    if (N > 5)
    {
        printf("the number is greater than 5");
    }
    else if (N < 5)
    {
        printf("the number is not greater than 5");
    }
    else
        printf("the number is %d same than 5", N);
    return 0;
}