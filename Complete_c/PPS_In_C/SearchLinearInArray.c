#include <stdio.h> 

int linearSearch(int A[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (A[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int A[] = {1, 5, 6, 8, 3, 2, 1, 0}; 
    int target;
    int size = sizeof(A) / sizeof(A[0]); 
    
    printf("Enter the number to search: ");
    scanf("%d", &target); 

    
    int index = linearSearch(A, size, target);

    if (index != -1) {
        printf("Number %d found at index %d\n", target, index); 
    } else {
        printf("Number %d not found in the array\n", target); 
    }

    return 0; 
}
