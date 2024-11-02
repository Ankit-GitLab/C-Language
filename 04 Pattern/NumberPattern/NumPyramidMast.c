#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a = i-1;
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int k=1; k<=i; k++){
            printf("%d ",k);
        }
        for(int m=1; m<=i-1; m++){
            printf("%d ",a);
            a--;
         }
        printf("\n");
    }
    return 0;
}