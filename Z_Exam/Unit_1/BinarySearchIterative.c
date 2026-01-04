#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
     system("cls");
    int key;
    printf("Enter number to find the key: ");
    scanf("%d", &key);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = binarySearch(arr, n, key);

    if (ans != -1)
        printf("Found the number at index: %d\n", ans);
    else
        printf("Element not found\n");

    return 0;
}
