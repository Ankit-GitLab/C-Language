// Calculate the sum of the first n natural numbers
// Write a program to calculate the sum of numbers from 1 to n, where n is input by the user
#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    printf("The sum of natural number : %d",sum);
    return 0;
}