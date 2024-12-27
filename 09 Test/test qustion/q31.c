#include<stdio.h>
int main(){
    int y,x=5;
    y=x++;
    printf("y %d\n",y);
    printf("++x %d\n",++x);
    printf("++x %d",++x);
    return 0;
}