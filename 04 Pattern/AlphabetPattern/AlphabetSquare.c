#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to print a to n tak : ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        int A=1;
        for(int j=1; j<=n; j++){
            int D=A+64;   //D = 65
            char ch = (char)D; //(char)65 ---> ch = 'A'
            printf("%c ",ch);
            A++;
            }
        printf("\n");
    }
    return 0;
}