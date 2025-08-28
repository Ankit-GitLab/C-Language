#include <stdio.h>
int main()
{
    int x, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalpair = 0;
    printf("Enter the number of pair which you want : ");
    scanf("%d", &x);
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("The total number of pair : %d", totalpair);
    return 0;
}