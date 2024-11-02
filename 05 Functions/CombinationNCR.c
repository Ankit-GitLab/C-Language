#include <stdio.h>
int factorial(int x)
{
    int Fact = 1;
    for (int i = 2; i <= x; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}
int main()
{
    int N;
    printf("Enter n : ");
    scanf("%d", &N);
    int R;
    printf("Enter r : ");
    scanf("%d", &R);

    int NCR = factorial(N) / (factorial(R) * factorial(N - R));
    printf("ncr = %d", NCR);
    return 0;
}