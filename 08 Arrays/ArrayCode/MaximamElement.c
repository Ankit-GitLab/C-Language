#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-3, -4, -5, -8, -19, -4, -12};
    int Max = INT_MIN;
    for (int i = 1; i < 7; i++)
    {
        if (Max < arr[i])
        {
            Max = arr[i];
        }
    }
    printf("The maximam number of array : %d", Max);
    return 0;
}