#include <stdio.h> 
int main() {
    int m, n, p, q; 
    int i, j, k;   
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);

    // Checking if matrix multiplication is possible
    if (n != p) {
        printf("Matrix multiplication is not possible!\n");
        return 0; // Exit the program
    }

    int A[m][n], B[p][q], C[m][q]; 

    // Taking input for first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Taking input for second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initializing result matrix C to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {          
        for (j = 0; j < q; j++) {      
            for (k = 0; k < n; k++) {  
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Printing the resulting matrix
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
