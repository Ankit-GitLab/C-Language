// Question 1: Basic Loop
// Print the first 10 natural numbers
// Write a program that prints numbers from 1 to 10 using a for loop.
#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++){
        printf("%d ",i);
    }
    return 0;
}

