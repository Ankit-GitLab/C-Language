#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    // Exp1 ? exp2: Exp3;
    N % 2 == 0 ? printf("Even number") : printf("Odd number");
    return 0;
}