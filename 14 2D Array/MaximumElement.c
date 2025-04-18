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
    // Input elements into the matrix
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

    // Find the maximum number
    int max = arr[0][0];  // Initialize max with the first element
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];  // Update max if a larger element is found
            }
        }
    }

    // Print the maximum number
    printf("The maximum number in the array: %d\n", max);

    return 0;
}
