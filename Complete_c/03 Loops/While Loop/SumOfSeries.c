#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 1 - 2 + 3 - 4 + 5 - 6......n terms
    // Odd number --> addtion
    // Even number --> subtract
    int Sum = 0;
    for(int i=1;i<=n;i++){
    if(i%2 != 0) Sum = Sum + i;
    else Sum = Sum - i;
    }                                              
                                               
    printf("The sum is : %d",Sum);
    return 0;
}