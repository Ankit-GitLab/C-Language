#include<stdio.h>
void England(){
    printf("you are in England\n");
    return;
}
void Australia(){
    printf("you are in Australia\n");
    England();
    return;
}
void India(){
    printf("you are in India\n");
    Australia();
    return;
}
int main(){
    India();
    return 0;
}