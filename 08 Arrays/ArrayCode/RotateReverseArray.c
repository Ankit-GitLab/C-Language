#include <stdio.h>
void reverse(int arr[], int si, int ei)
{ // si=starting,ei=ending(index)
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7; // n = number of elements in array
    int k = 3; // k = how many number you rotate
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}