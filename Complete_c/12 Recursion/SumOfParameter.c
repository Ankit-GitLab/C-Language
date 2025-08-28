#include<stdio.h>
void sum(int n, int x){
    if(n==0){
        printf("The sum of natural number : %d",x);
        return;
    }
        sum(n-1, x+n);
        return;

}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
