#include<stdio.h>
void DecAndInc(int n){
    if(n==0) return;
    printf("%d\n",n);
    DecAndInc(n-1);
    printf("%d\n",n);
    
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    DecAndInc(n);
    return 0;
    
}
