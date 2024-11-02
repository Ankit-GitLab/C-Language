#include <stdio.h>
void Fun(int arr[])
{
    arr[0] = 10;
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    Fun(arr);
    printf("%d", arr[0]);
    return 0;
}