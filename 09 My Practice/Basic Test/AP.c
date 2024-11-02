#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a =4;
    for(int i=1; i<=n; i=i+1){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}