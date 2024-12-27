#include<stdio.h>
int main(){
  float a,b,result;
  char operator;
  printf("wellcome to arthimatic calculator\n");
  printf("enter first number : ");
  scanf(" %f", &a);
  printf("enter what you want to do(+,-,*,/) : ");
  scanf(" %c", &operator);
  printf("enter second number : ");
  scanf(" %f", &b);
  
  switch (operator)
  {
  case '+':
  result=a+b;
  printf("sum of the two number %.4f and %.1f is : %.1f",a,b,result);
    break;
    case '-':
  result=a-b;
  printf("subtraction of the two number %.1f and : %.1f is %.1f",a,b,result);
    break;
    case '*':
  result=a*b;
  printf("miltiply of the two number %.1f and %.1f is : %.1f",a,b,result);
    break;
    case '/':
   if(b!=0){
   result=a/b;
  printf("division of the two number %.1f and %.1f is : %.1f",a,b,result);
   }else { printf("Error: Division by zero is not allowed.\n");
        }
    break;
  
  default:
  printf("\nthank you");
    break;
  }

  return 0;


}
