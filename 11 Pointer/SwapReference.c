#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
} 
int main(){
    int a = 10;
    int b = 20;
    printf("Before swap : A = %d, B = %d\n",a,b);
    swap(&a,&b);
    printf("After swap : A = %d, B = %d\n",a,b);
    return 0;
}