#include<stdio.h>

int main() {
    // Taking input
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    
    int a[n][m];  // Declare a matrix of size n*m

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {  // Loop through rows
        for (int j = 0; j < m; j++) {  // Loop through columns
            scanf("%d", &a[i][j]);  // Input element for the current position
        }
    }

    // Taking the coordinates of the submatrix
    int c1, r1, c2, r2;
    printf("Enter the coordinates (c1, r1): ");
    scanf("%d %d", &c1, &r1);
    printf("Enter the coordinates (c2, r2): ");
    scanf("%d %d", &c2, &r2);

    // Initialize the sum variable to a[c1][r1]
    int sum = a[c1][r1];

    // Find the sum of the rectangle defined by the coordinates (c1, r1) and (c2, r2)
    for (int i = c1; i <= c2; i++) {  // Loop through rows in the submatrix
        for (int j = r1; j <= r2; j++) {  // Loop through columns in the submatrix
            sum += a[i][j];  // Add the element to the sum
        }
    }

    // Print the sum
    printf("The sum of the rectangle is: %d\n", sum);

    return 0;  // End the program
}
