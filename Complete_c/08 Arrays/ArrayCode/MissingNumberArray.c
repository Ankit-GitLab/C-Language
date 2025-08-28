#include <stdio.h>
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int Sum = 0;
    int Sum2 = 55; // 10*(10+1)/2
    for (int i = 0; i <= 8; i++)
    {
        Sum += arr[i];
    }
    int MNum = Sum2 - Sum;
    printf("%d is missing number in the Array", MNum);
    return 0;
}