#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n <= 1)
        printf("%d is neither than prime & compositive", n);
    else if (a == 0)
        printf("the %d is prime number",n);
    else
        printf("the %d is compositive number",n);
    return 0;
}