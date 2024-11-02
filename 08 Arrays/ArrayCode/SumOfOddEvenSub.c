#include <stdio.h>
int main()
{
   int arr[6] = {1, 3, 5, 7, 9, 11};
   int SumEven = 0;
   int SumOdd = 0;
   for (int i = 0; i < 6; i++)
   {
      if (i % 2 != 0)
         SumEven += arr[i];
      else
         SumOdd += arr[i];
   }
   int Subtract = SumEven - SumOdd;
   printf("%d", Subtract);
   return 0;
}