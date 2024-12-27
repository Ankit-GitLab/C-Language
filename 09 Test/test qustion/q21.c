
#include<stdio.h>
int sum(int n){ 
    if(n==1 || n==0) return 1;
    int sum(n) = n + sum (n-1);
    return sum;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("The factorial number %d is : %d",n,fact);
    return 0;
}