#include<stdio.h>
int Sum(int n){ 
    if(n==1 || n==0) return 1;
    int recAns = n+Sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = Sum(n);
    printf(" %d",fact);
    return 0;
}