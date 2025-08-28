#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    if (N < 0)
    { // if n is negative
        N = N * (-1);
    }
    printf("the absloute value : %d", N);
    return 0;
}