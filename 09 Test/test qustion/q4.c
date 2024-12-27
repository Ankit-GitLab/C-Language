//Find the factorial of a number
//Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>
int main(){
    int n, i =0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f = 1;
    for(i=1; i<=n; i++){
        f = f*i;
       printf("%d factorial is : %d\n",i,f); 
    }
    
    return 0;
}
 