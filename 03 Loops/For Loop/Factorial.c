#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 5!=1*2*3*4*5
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product*i;
       printf("The Factorial %d is : %d\n", i,product);  
    }
    return 0;
}