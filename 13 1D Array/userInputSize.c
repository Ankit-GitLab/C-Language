#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of arrays : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<=size-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=size-1; i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}
