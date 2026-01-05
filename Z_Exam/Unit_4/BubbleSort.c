#include <stdio.h>

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1, 2, 6, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);
    bubbleSort(arr, n);
    printArr(arr, n);

    return 0;
}
