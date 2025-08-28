#include<stdio.h>
int main(){
    int x;
    printf("Size of x : %d\n",sizeof(x));
    printf("Size of int : %d\n",sizeof(int));
    printf("Size of 5 : %d\n",sizeof(5));
    printf("Size of char : %d\n",sizeof(char));
    printf("Size of short int : %d\n",sizeof(short int));
    printf("Size of float : %d\n",sizeof(float));
    printf("Size of double : %d\n",sizeof(double));
    printf("Size of long double : %d",sizeof(long double));

    return 0;
}