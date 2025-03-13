#include<stdio.h>
void Increasing(int n){
    if(n==0) return;
    Increasing(n-1);
    printf("%d\n",n);


}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Increasing(n);
    return 0;
}
