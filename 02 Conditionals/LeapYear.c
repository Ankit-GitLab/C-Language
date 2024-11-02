#include <stdio.h>
int main()
{
    int N;
    printf("Enter a year : ");
    scanf("%d", &N);
    if (N % 4 == 0)
        printf("leap year ");
    else
        printf("Not Leap Year");
    return 0;
}