#include <stdio.h>
void Swap(int arr[])
{
  int temp = arr[0];
  arr[0] = arr[1];
  arr[1] = temp;
  return;
}
int main()
{
  int arr[2] = {6, 2};
  printf("%d %d\n", arr[0], arr[1]);
  Swap(arr);
  printf("%d %d\n", arr[0], arr[1]);

  return 0;
}