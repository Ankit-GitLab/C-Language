#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2; i<=n-1; i++){
        if(n % i == 0){
            a = 1;
            break;
        }
    }
    if(n<=1){
        printf("%d is not neither prime and compositive");
    }
    else if (a == 1){
        printf("%d is compositive number");
    }
    else{
        printf("%d is prime number");
    }
    return 0;
}

