#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int evenSum = 0, oddSum = 0, different;
    for(int i=0; i<=9; i++){
        if(i%2 != 0){
            oddSum += arr[i]; 
        }
        else{
            evenSum += arr[i];
        }
    }
    different = evenSum - oddSum;
    printf("%d",different);
    return 0;
}
