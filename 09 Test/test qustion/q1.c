#include<stdio.h>
int main(){
    int n = 5;
    int p =1;
    for(int i=1; i<=n; i++){
        p *= i;
    }
    printf("The factaial : %d\n",p);
    return 0;
}