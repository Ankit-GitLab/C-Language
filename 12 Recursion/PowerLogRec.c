#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    int Ans = powerlog(a,b/2);
    if(b%2==0)
        return Ans*Ans;

    else return Ans*Ans*a;
}
int main(){
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter power : ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("Base is %d power is %d answer is : %d",a,b,p);
}

