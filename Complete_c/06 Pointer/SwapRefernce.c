#include<stdio.h>

    void swap(int* x, int* y){
        int temp;
        temp = *x;// temp = 2
        *x = *y;// a = 9
        *y = temp;// *y = 2 --> b = 2;
        return ; 
    }
    int main(){
    int a = 2;
    int b = 9;
    
    printf("After\n");
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);

     swap(&a , &b);
    
     printf("Before\n");
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
} 