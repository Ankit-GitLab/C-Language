#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    printf("Enter a square root number : ");
    scanf("%d", &N);
    int Root = sqrt(N);
    printf("The square root %d is %d", N, Root);
    return 0;
}