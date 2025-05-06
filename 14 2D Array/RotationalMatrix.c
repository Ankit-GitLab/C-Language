#include <stdio.h> // Standard input/output

#define SIZE 10 // Maximum size of the matrix

// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix(int matrix[SIZE][SIZE], int n) {
    // Step 1: Transpose the matrix (swap rows with columns)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Swap matrix[i][j] with matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            // Swap matrix[i][j] with matrix[i][n - j - 1]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[SIZE][SIZE], int n) {
    for (int i = 0; i < n; i++) {           // Loop through rows
        for (int j = 0; j < n; j++) {       // Loop through columns
            printf("%d ", matrix[i][j]);    // Print each element
        }
        printf("\n");                       // New line after each row
    }
}

int main() {
    int matrix[SIZE][SIZE]; // Declare 2D array
    int n;

    // Ask user for the size of the matrix
    printf("Enter the size of the matrix (N x N): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {           // Rows
        for (int j = 0; j < n; j++) {       // Columns
            scanf("%d", &matrix[i][j]);     // Input each element
        }
    }

    // Show original matrix
    printf("Original Matrix:\n");
    printMatrix(matrix, n);

    // Rotate the matrix
    rotateMatrix(matrix, n);

    // Show rotated matrix
    printf("Matrix after 90-degree rotation:\n");
    printMatrix(matrix, n);

    return 0; // End of program
}
