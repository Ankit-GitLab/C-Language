#include<stdio.h>
int main(){
    for(int i=65; i<=90; i++){
        char ab = (char)i;
        printf("%c-->",ab);
        printf("%d\n",i);
    }
    return 0;
}