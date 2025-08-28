#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
        int totalways = stair(n-1) + stair(n-2);
        return totalways;
    
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
 }