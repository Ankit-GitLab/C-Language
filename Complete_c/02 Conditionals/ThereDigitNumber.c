#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    if (N > 99 && N < 1000)
    {
        printf("it is a three digit number");
    }
    else
    {
        printf("it is not a three digit number");
    }
    return 0;
}