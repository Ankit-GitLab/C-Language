#include <stdio.h>
int main()
{
  float Principal, Rate, Time, Si;
  printf("ENTER PRINCIPAL : ");
  scanf("%f", &Principal);
  printf("ENTER RATE : ");
  scanf("%f", &Rate);
  printf("ENTER TIME : ");
  scanf("%f", &Time);
  Si = (Principal * Rate * Time) / 100;
  printf("%f", Si);
  return 0;
}