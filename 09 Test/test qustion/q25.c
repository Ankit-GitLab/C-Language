// Write a Program to Print Integer Number Entered by User
#include<stdio.h>
int main(){
 int P,t;
 scanf("%d %d",&P,&t);
 float rate , com;
 printf("rate=");
 scanf("%f",&rate);
com= P*(1+(rate/100))*t;
 printf("compound intersted :%f",com);


    return 0;
}