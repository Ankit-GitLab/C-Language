#include<stdio.h>
int main(){
    int n;
    printf("Give any number  those you want any table :");
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n){
        printf("%d ",i);
    }
    return 0;
}