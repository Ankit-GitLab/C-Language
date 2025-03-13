#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    int recAns = fibo(n-1) + fibo(n-2);
    return recAns;
}
int main(){
    int n; 
    printf("Enter a number : "); 
    scanf("%d",&n);
    int fact = fibo(n);
    printf("The fibonacci term of %d is : %d",n,fact);
    return 0;
}
