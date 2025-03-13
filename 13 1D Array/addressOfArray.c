#include<stdio.h>
int main (){
    int a[5] = {1,1,3,1,1};
    for(int i=0; i<=4; i++){
    printf("%p\n",&a[i]);
    }
    return 0;
} 
  