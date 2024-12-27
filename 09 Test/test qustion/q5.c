//  Print all prime numbers between 1 and n
// Write a program that asks the user for a value n and prints all prime numbers between 1 and n.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Prime number = ");
    for(int i=2; i<=n-1; i++){
        if(i%2 != 0){
            printf(" %d ",i);
        }
        
    } 
    return 0;
}