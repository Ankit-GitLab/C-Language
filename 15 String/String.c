#include<stdio.h>
int main(){
   char a[] = "Hello";
   char b[50] = "Hello";
   char c[] = {'H','e','l','l','o','\0'};
   char d[6] = {'H','e','l','l','o','\0'};
   printf("a = %s   b = %s   c = %s   d = %s\n",a,b,c,d);
    return 0;
}