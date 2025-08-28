#include<stdio.h>
#include<math.h>
int main(){
    int A;
    printf("Enter a number : ");
    scanf("%d",&A);
    int B;
    printf("Enter a square number : ");
    scanf("%d",&B);
    int Root = pow(A,B);
    printf("The square root %d , %d is : %d",A,B,Root);
    return 0;
}