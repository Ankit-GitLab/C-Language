#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a=0;
    for (int i = n; i <= n * 10; i = i + n)
    {
        a++;
        printf(" %d *  %d = %d\n",n,a,i);
    }
    return 0;
}