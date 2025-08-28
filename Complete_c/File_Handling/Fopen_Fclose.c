 #include<stdio.h>
 int main(){
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c);
   return 0;

 } 
