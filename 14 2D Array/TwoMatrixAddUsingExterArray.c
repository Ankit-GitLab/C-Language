#include<stdio.h>
int main() {

    int i, j, a, b;
    
    // Taking input for the first matrix
    int c1, r1;
    printf("Enter First Matrix\n");
    printf("Enter row number : ");
    scanf("%d", &r1);
    printf("Enter column number : ");
    scanf("%d", &c1);
    printf("Total Element is equal to : %d\n", r1 * c1);
    int arr1[r1][c1];
    printf("Enter input\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Taking input for the second matrix
    int c2, r2;
    printf("Enter Second Matrix\n");
    printf("Enter row number : ");
    scanf("%d", &r2);
    printf("Enter column number : ");
    scanf("%d", &c2);
    printf("Total Element is equal to : %d\n", r2 * c2);
    int arr2[r2][c2];
    printf("Enter input\n");
    for (a = 0; a < r2; a++) {
        for (b = 0; b < c2; b++) {
            scanf("%d", &arr2[a][b]);
        }
    }

    // Check if matrices are same size
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible. Sizes are different.\n");
        return 0;
    }

    // Print first matrix
    printf("Print first the matrix\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // Print second matrix
    printf("Print the second matrix\n");
    for (a = 0; a < r2; a++) {
        for (b = 0; b < c2; b++) {
            printf("%d ", arr2[a][b]);
        }
        printf("\n");
    }

    // Declare external matrix for storing the sum
    int sumMatrix[r1][c1];  // external matrix to store sum

    // Sum of two matrices
    printf("The Sum Of Two Matrices Is Below!\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sumMatrix[i][j] = arr1[i][j] + arr2[i][j];  // Store the sum
            printf("%d ", sumMatrix[i][j]);  // Print the sum matrix
        }
        printf("\n");
    }

    return 0;
}
