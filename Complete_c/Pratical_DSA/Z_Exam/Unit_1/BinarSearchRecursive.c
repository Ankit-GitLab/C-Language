#include<stdio.h>
int binarySearchRecursive(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }

    int mid = (low + high) / 2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] > key){
        return binarySearchRecursive(arr, low, mid-1, key);
    }else{
        return binarySearchRecursive(arr, mid+1, high, key);
    }

    return -1;
}
int main(){
    int key;
    printf("Enter a number : ");
    scanf("%d",&key);
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = binarySearchRecursive(arr, 0, n-1, key);

    if (ans != -1)
        printf("Found the number at index: %d\n", ans);
    else
        printf("Element not found\n");

    return 0;
}