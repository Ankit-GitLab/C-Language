#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {12, 21, 30, 42, 55, 6, 7};
    int X;
    printf("Enter a number which you want to search in the Array: ");
    scanf("%d", &X);
    int idx = -1;
    bool flag = false; // flase means not present
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == X)
        {
            flag = true; // ture means present
            idx = i;

            break;
        }
    }
    if (flag == false)
        printf("%d is not present in the array ", X);
    else
        printf("%d is present in the array and its index is : %d", X, idx);
    return 0;
}