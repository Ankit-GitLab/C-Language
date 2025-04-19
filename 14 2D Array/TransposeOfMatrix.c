#include <stdio.h>

int main() {
    int r, c;

    // Input number of rows and columns
    printf("Enter row number: ");
    scanf("%d", &r);
    printf("Enter column number: ");
    scanf("%d", &c);

    int arr[r][c]; // Declare a 2D array with given size

    // Input the matrix elements
    printf("Enter total elements %d:\n", r * c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the original matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print the transpose of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i = 0; i < c; i++) {           // Swap row with column
        for(int j = 0; j < r; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
