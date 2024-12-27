#include<stdio.h>
int main(){
  
  int n,ans;
  printf("enter a value:");
  scanf("%d",&n);
  
  ans=(n<0) ? -n : n;
  printf("the absolute value of is %d\n",ans);
  
  return 0;
}
