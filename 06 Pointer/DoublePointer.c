#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;// int* --> int ka adderss store karta hai
    int** y = &x;// int** --> int* ka adderss store karta hai
    printf("%d\n",a);
     printf("%d\n",*x);
      printf("%d\n",**y);
    return 0;
}