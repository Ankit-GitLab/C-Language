#include<stdio.h>
 int main(){
  int num1,num2,num3;
  printf("please enter your first number:");
  scanf("%d",&num1);
  printf("please enter your second number:");
  scanf("%d",&num2);
  printf("please enter your third number:");
  scanf("%d",&num3);

  if(num1>num2&&num1>num3){
    printf("%d is greater than %d and %d",num1,num2,num3);

  }else if(num2>num1&&num2>num3){
    printf("%d is greater than %d and %d",num2,num1,num3);

  }else if(num3>num1&&num3>num2){
    printf("%d is greater than %d and %d",num3,num1,num2);

  }else{
    printf("all given numbers are same %d,%d,%d",num1,num2,num3);
  }
   

  return 0;
 }
