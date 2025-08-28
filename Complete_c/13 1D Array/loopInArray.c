#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0; i<=4; i++){
        int a = i+1;
        printf("Enter element number %d\n",a);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
    printf(" element  %d is : %d\n",i,arr[i]);
    }
    return 0;
}

