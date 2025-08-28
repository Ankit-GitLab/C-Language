#include <stdio.h>
int main()
{
    int X, Y;
    printf("Enter a coondinate : ");
    scanf("%d", &X);
    scanf("%d", &Y);

    if (X == 0 && Y == 0)
    {
        printf("The point is origin");
    }
    else if (X == 0)
    {
        printf("lies on y-axis");
    }
    else if (Y == 0)
    {
        printf("lies on x-axis");
    }
    else
    {
        printf("lies on not x-axis and y- axis");
    }
    return 0;
}
