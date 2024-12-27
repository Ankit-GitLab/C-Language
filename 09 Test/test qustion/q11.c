#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for (int i=2; i <= n-1; i++){
      if  ( n % i == 0)
       { a = 1;
        break;}
    }
    if (n<=1){
        printf("%d is neither then prime and compositive",n);
    }
    else if (a==1){
        printf("%d is a compositive number",n);
    }
    else {
        printf("%d is a prime number",n);
    }
    return 0;
}