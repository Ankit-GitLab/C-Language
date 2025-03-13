#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a square number : ");
    scanf("%d",&b);
    int root = pow(a,b);
    printf("The square root of %d,%d is \n Answer = %d",a,b,root);

    return 0;
}