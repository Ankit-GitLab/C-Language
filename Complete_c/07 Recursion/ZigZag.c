#include<stdio.h>
void zigzag(int n){
if(n==0) return;
printf("%d ",n);
 zigzag(n-1);
printf("%d ",n);
 zigzag(n-1);
printf("%d ",n);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    zigzag (n);
   return 0; 
}