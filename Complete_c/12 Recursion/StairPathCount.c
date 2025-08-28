#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}
int main (){
    int n;
    printf("Enter of stair : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("stair of %d the ways of : %d",n,ways);
    return 0;
}
