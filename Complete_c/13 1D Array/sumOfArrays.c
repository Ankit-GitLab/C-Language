#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0; i<=4; i++){
        sum = sum + arr[i];
    }
    printf("the sum of arrays : %d",sum);
    return 0;
}
