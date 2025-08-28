#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function After swap : a = %d, b = %d\n",a,b);
}
int main(){
    int x=10;
    int y=30;
    printf("Before swap : x = %d,  y = %d\n",x,y);
    swap(x,y);
    printf("After swap : x = %d,  y = %d\n",x,y);
    return 0;
}