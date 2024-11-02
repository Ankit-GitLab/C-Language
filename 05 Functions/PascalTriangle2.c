#include <stdio.h>
int main()
{
  int N;
  printf("Enter n : ");
  scanf("%d", &N);

  for (int i = 0; i <= N; i++)
  {
    int First = 1;

    for (int j = 0; j <= i; j++)
    {
      printf("%d ", First);
      First *= (i - j) / (j + 1); // iC(j+1)
    }
    printf("\n");
  }
  return 0;
}