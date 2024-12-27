#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0){
        printf("%d is zero",n);
        
    }
    else if(0<n){
        printf("%d is greater than zreo",n);
    }
    else printf("%d is not smaller than zero",n);
    return 0;
}                                                                                                