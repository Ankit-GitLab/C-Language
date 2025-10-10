#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int p = 1;
    for(int i=0; i<5; i++){
        p *= arr[i];
    }
    printf("%d\n",p);
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",size);
    return 0;
}
