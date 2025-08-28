#include<stdio.h>
int main(){
    int a = 3;
    int b = 5;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the value of A = %d\n",a);
    printf("the value of B = %d",b);
}