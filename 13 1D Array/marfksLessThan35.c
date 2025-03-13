#include<stdio.h>
int main(){
    int marks[10] = {45,67,24,89,13,56,29,45,90,56};
    for(int i=0; i<=9; i++){
        if(marks[i] < 35){
            printf("Index number is %d and marks is %d\n",i,marks[i]);
        }
    }
    return 0;
}
