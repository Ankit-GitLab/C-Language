#include <stdio.h>
int factorial(int X)
{
  int Fact = 1;
  for (int i = 2; i <= X; i++)
  {
    Fact = Fact * i;
  }
  return Fact;
}
int combination(int n, int r)
{
  int NCR = factorial(n) / (factorial(r) * factorial(n - r));
  return NCR;
}
int main()
{
  int N;
  printf("Enter n : ");
  scanf("%d", &N);
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      int ICJ = combination(i, j);
      printf("%d ", ICJ);
    }
    printf("\n");
  }
  return 0;
}