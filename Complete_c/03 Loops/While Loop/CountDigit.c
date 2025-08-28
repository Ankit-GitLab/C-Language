#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n); // n = 12345 ---> 5
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    printf("The number of digits is %d",count); // count = 5
    return 0;
}