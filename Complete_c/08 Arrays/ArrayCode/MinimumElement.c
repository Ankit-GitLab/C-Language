#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-3, -4, -5, -8, -19, -4, -12};
    int Min = INT_MAX;
    for (int i = 1; i < 7; i++)
    {
        if (Min > arr[i])
        {
            Min = arr[i];
        }
    }
    printf("The minimum number of array : %d", Min);
    return 0;
}