#include <stdio.h>
int factorial(int X)
{
    int Fact = 1;
    for (int i = 2; i <= X; i++)
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

    int NPR = factorial(N) / (factorial(N - R));
    printf("npr = %d", NPR);
    return 0;
}