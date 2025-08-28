#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {-1,4,6,90,-23,3,8};
    int min = INT_MAX;
    for(int i=0; i<=6; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
