#include <stdio.h>//jab sab ko add karna ho to
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum = 0;
    int LastDigit;
    while (n != 0)
    {
        LastDigit = n % 10;
        sum = sum + LastDigit;
        n = n / 10;
    }
    printf("The sum of all digits number : %d", sum);
    return 0;
}