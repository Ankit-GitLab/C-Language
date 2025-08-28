#include<stdio.h>

    void swap(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        printf("Before\n");
        printf("The value of a is %d\n",a);
        printf("The value of b is %d\n",b);
        return ; 

    }
    int main(){
    int a = 2;
    int b = 9;
    
    printf("After\n");
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);

     swap(a ,b);

     printf("Ankit\n");
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    
    
    return 0;
} 