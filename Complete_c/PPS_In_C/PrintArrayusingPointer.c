#include <stdio.h> 

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int *ptr = arr; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Array elements using pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i)); 
    }

    printf("\n"); 
    return 0; 
}
