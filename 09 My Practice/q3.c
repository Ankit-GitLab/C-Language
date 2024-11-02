//Write a program that asks the user to input a number and then prints its multiplication table up to 10.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i;
    for(i=1; i<=10; i++){
    printf(" %d x %d = %d\n ",n, i, n*i);
    }

    return 0;
}
    