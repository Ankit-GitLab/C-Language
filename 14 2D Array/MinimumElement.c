#include<stdio.h>
int main(){
    
    // Taking input
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter total elements: %d\n", r * c);
    
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the matrix
    printf("Your matrix is below:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Find minimum number
    int min = arr[0][0];  // Initialize min with the first element
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];  // Update min if a smaller element is found
            }
        }
    }

    // Print the minimum number
    printf("The minimum number in the array: %d\n", min);

    return 0;
}
