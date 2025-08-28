#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,2,3,79,5,6,7};
    int max= INT_MIN;
    int sMax = INT_MIN;
    // max
    
    for(int i=0; i<=6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i=0; i<=6; i++){
        if(arr[i] != max && sMax < arr[i]){
            sMax = arr[i];
        }
    }
    printf("Max : %d\n",max);
    printf("sMax : %d\n",sMax);
    return 0;
}
