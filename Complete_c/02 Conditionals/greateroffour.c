#include <stdio.h>
int main()
{
  int a, b, c, d;
  printf("Enter number of A : ");
  scanf("%d", &a);
  printf("Enter number of B : ");
  scanf("%d", &b);
  printf("Enter number of C : ");
  scanf("%d", &c);
  printf("Enter number of D : ");
  scanf("%d", &d);
  if (a > b && a > c && a > b)
  {
    printf("A is greater than b , c and d");
  }
  else if (b > a && b > c && b > d)
  {
    printf("B is greater than a , c and d");
  }
  else if (c > b && c > d && c > a)
  {
    printf("C is greater than b , a and d");
  }
  else if (d > b && d > c && d > a)
  {
    printf("D is greater than b , c and d");
  }

  else
  {
    printf("Two or Three  number are same");
  }
  return 0;
}