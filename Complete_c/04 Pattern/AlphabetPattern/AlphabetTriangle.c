#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int A=1;
        for(int j=1; j<=i; j++){
            int D=A+64;
            char ch=(char)D;
           
            printf("%c ",ch);
                A++;
        }
        printf("\n");
    }
    return 0;
}