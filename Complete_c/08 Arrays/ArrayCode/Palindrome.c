#include <stdio.h>
int Palindrome(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[5] = {1,2,3,2,1};
       
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (Palindrome(arr, 5))
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");
    return 0;
}
