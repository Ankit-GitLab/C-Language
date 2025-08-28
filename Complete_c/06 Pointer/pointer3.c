
#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    *x = 25; // a is changed.
    printf("%d\n",*x);
    return 0;
}