#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++){
        
        char ch = (char)i;
        printf("%c--> ",ch);
        printf("%d\n",i);
    }
    return 0;
}