#include <stdio.h>

int main() {
    int r, c;

    // Input number of rows and columns
    printf("Enter row number: ");
    scanf("%d", &r);

    printf("Enter column number: ");
    scanf("%d", &c);

    int arr[r][c]; // Declare a 2D array with r rows and c columns

    // Input the matrix elements
    printf("Enter total elements: %d\n", r * c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]); // Read element at position [i][j]
        }
    }

    // Print the original matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]); // Print element at [i][j]
        }
        printf("\n"); // Newline after each row
    }

    int brr[c][r]; // Declare a new matrix for the transpose with c rows and r columns

    // Transpose the matrix: swap rows with columns
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i]; // Transpose operation
        }
    }

    // Print the transpose of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]); // Print element of transposed matrix
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
