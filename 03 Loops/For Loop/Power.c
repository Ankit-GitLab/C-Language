#include<stdio.h>
int main(){
    int Base;
    printf("Enter a Base :");
    scanf("%d",&Base);
    int Exponent ;
    printf("Enter a Exponent :");
    scanf("%d",&Exponent);
    int Power = 1;
  
    for(int I=1; I<=Exponent; I++){
        Power = Power * Base;
    }
    printf("%d rasied to the power of %d is : %d", Base, Exponent, Power);
    return 0;
}