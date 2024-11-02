
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
          
        int a=1;
    for(int i=1; i<=n;i++){
        char na = 'A';
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
         for(int k=1; k<=a; k++){
            printf("%c ",na++);
        }
        
        a=a+2;
        printf("\n");
        }
    return 0;
}