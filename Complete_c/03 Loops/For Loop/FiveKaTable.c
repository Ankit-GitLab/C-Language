#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);
    for (int i = 5; i <= 50; i = i + 5)
    {
        printf("%d ", i);
    }

    return 0;
}