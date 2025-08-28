#include<stdio.h>  // Include standard input-output library

int main() {
    // Taking input for the number of rows and columns
    int r, c;  // Variables for rows and columns

    printf("Enter number of rows : ");
    scanf("%d", &r);  // Input number of rows

    printf("Enter number of columns : ");
    scanf("%d", &c);  // Input number of columns

    int arr[r][c];  // Declare a 2D array to store the matrix of size r x c

    // Input matrix elements
    printf("Enter the elements of the matrix : %d\n", r * c);  // Prompt to enter total elements
    for (int i = 0; i < r; i++) {  // Loop for each row
        for (int j = 0; j < c; j++) {  // Loop for each column in the current row
            scanf("%d", &arr[i][j]);  // Take input for each element in the matrix
        }
    }

    // Find the row with the maximum sum
    int maxSum = 0;  // Variable to store the maximum sum found so far (initialized to 0)
    int rowIndex = 0;  // Variable to store the index of the row with maximum sum

    for (int i = 0; i < r; i++) {  // Loop through each row
        int rowSum = 0;  // Variable to store sum of the current row
        for (int j = 0; j < c; j++) {  // Loop through each element in the current row
            rowSum += arr[i][j];  // Add current element to rowSum
        }

        // Check if current row sum is greater than the maximum sum
        if (rowSum > maxSum) {
            maxSum = rowSum;  // Update maxSum with current rowSum
            rowIndex = i;  // Update rowIndex with current row number
        }
    }

    // Print the maximum row sum and its row index (1-based index)
    printf("The maximum row sum is: %d\n", maxSum);  // Display the max sum
    printf("The row with the maximum sum is : Row %d\n", rowIndex + 1);  // Convert 0-based index to 1-based

    return 0;  // Exit the program
}
